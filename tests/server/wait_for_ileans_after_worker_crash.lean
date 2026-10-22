module

import Lean.Data.Lsp

/-!
BT081 follow-up: ILean waits that require further progress fail when their worker crashes.
Cover pending and subsequent waits, cached versions, other workers, restart, and live fatal errors.
-/

open IO Lean Lsp JsonRpc

private def documentUri : DocumentUri := "file:///wait_for_ileans_after_worker_crash.lean"
private def otherUri : DocumentUri := "file:///wait_for_ileans_other_worker.lean"
private def healthyText := "import Lean\n#check Nat\n"

private def gatedText (gate : System.FilePath) (action : String) : String :=
  s!"import Lean\n#eval do\n  while (← IO.FS.readFile {repr gate.toString}) != \"go\" do\n    IO.sleep 10\n  {action}\n"

private def openDocument (uri : DocumentUri) : Ipc.IpcM Unit :=
  Ipc.writeNotification {
    method := "textDocument/didOpen"
    param := {
      textDocument := { uri, languageId := "lean", version := 1, text := healthyText }
      : DidOpenTextDocumentParams
    }
  }

private def change (uri : DocumentUri) (version : Nat) (text : String) : Ipc.IpcM Unit :=
  Ipc.writeNotification {
    method := "textDocument/didChange"
    param := {
      textDocument := { uri, version? := some version }
      contentChanges := #[TextDocumentContentChangeEvent.fullChange text]
      : DidChangeTextDocumentParams
    }
  }

private def requestILeans (id : Nat) (uri : DocumentUri) (version : Nat) : Ipc.IpcM Unit :=
  Ipc.writeRequest {
    id
    method := "$/lean/waitForILeans"
    param := { uri? := some uri, version? := some version : WaitForILeansParams }
  }

private def waitForILeans (id : Nat) (uri : DocumentUri) (version : Nat) : Ipc.IpcM Unit := do
  requestILeans id uri version
  discard <| Ipc.readResponseAs id WaitForILeans

private def workspaceBarrier (id : Nat) : Ipc.IpcM Unit := do
  Ipc.writeRequest {
    id
    method := "workspace/symbol"
    param := { query := "" : WorkspaceSymbolParams }
  }
  discard <| Ipc.readResponseAs id (Array SymbolInformation)

private def isFatalProgress (msg : JsonRpc.Message) : IO Bool := do
  match msg with
  | .notification "$/lean/fileProgress" (some params) =>
    let p : LeanFileProgressParams ← IO.ofExcept <| fromJson? (toJson params)
    return p.textDocument.uri == documentUri && p.processing.any (·.kind == .fatalError)
  | _ => return false

private partial def expectError (expectedId : RequestID) (expectedCode : ErrorCode) : Ipc.IpcM String := do
  match ← Ipc.readMessage with
  | .responseError id code message _ =>
    unless id == expectedId && code == expectedCode do
      throw <| userError s!"unexpected error response: {id}/{(toJson code).compress}"
    return message
  | .response id _ => throw <| userError s!"unexpected success for {id}"
  | _ => expectError expectedId expectedCode

private def waitForCrash (expectedId : RequestID) (expectedCode : ErrorCode) : Ipc.IpcM String := do
  let mut sawFatal := false
  let mut errorMessage? := none
  while !sawFatal || errorMessage?.isNone do
    match ← Ipc.readMessage with
    | .responseError id code message _ =>
      unless errorMessage?.isNone && id == expectedId && code == expectedCode do
        throw <| userError s!"unexpected error response: {id}/{(toJson code).compress}"
      errorMessage? := some message
    | .response id _ => throw <| userError s!"unexpected success for {id}"
    | msg =>
      if ← isFatalProgress msg then
        sawFatal := true
  return errorMessage?.get!

private def waitForFatalProgress : Ipc.IpcM Unit := do
  while true do
    let msg ← Ipc.readMessage
    if ← isFatalProgress msg then
      return
    match msg with
    | .response .. | .responseError .. =>
      throw <| userError "unexpected response while waiting for fatal progress"
    | _ => pure ()

private def testCrash (exitCode : UInt32) (expectedCode : ErrorCode) : IO Unit :=
  IO.FS.withTempFile fun crashGateHandle crashGate =>
  IO.FS.withTempFile fun otherGateHandle otherGate =>
  Ipc.runWith "lean" #["--server"] do
    Ipc.writeRequest {
      id := 0
      method := "initialize"
      param := ({ capabilities := {} } : InitializeParams)
    }
    discard <| Ipc.readResponseAs 0 InitializeResult
    Ipc.writeNotification ⟨"initialized", InitializedParams.mk⟩
    openDocument documentUri
    openDocument otherUri
    waitForILeans 1 documentUri 1
    waitForILeans 2 otherUri 1

    change documentUri 2 <| gatedText crashGate s!"(IO.Process.forceExit {exitCode} : IO Unit)"
    change otherUri 2 <| gatedText otherGate "pure ()"
    requestILeans 3 documentUri 2
    requestILeans 4 otherUri 2
    -- Both waits have reached the watchdog before the first worker is allowed to exit.
    workspaceBarrier 5
    crashGateHandle.putStr "go"
    crashGateHandle.flush
    let pendingError ← waitForCrash 3 expectedCode

    requestILeans 6 documentUri 2
    let subsequentError ← expectError 6 expectedCode
    assert! pendingError == subsequentError
    waitForILeans 7 documentUri 1
    Ipc.writeRequest ⟨8, "$/lean/waitForILeans", WaitForILeansParams.mk none none⟩
    discard <| Ipc.readResponseAs 8 WaitForILeans
    otherGateHandle.putStr "go"
    otherGateHandle.flush
    discard <| Ipc.readResponseAs 4 WaitForILeans

    change documentUri 3 healthyText
    waitForILeans 9 documentUri 3
    change documentUri 4 "import MissingModuleForILeanCrashTest\n"
    waitForFatalProgress
    waitForILeans 10 documentUri 4

    requestILeans 11 documentUri 5
    workspaceBarrier 12
    for uri in [documentUri, otherUri] do
      Ipc.writeNotification {
        method := "textDocument/didClose"
        param := { textDocument := { uri } : DidCloseTextDocumentParams }
      }
    discard <| expectError 11 .contentModified
    -- Removed waiters must not produce duplicate replies on finalization, restart, or close.
    workspaceBarrier 13
    Ipc.shutdown 14
    assert! (← Ipc.waitForExit) == 0

public def main : IO Unit := do
  testCrash 1 .workerExited
  testCrash 3 .workerCrashed
