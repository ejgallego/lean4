module

import Lean.Data.Lsp

/-! New requests to a known crashed worker receive an error matching its exit code without entering its queue.
BT081: also preserve restart on didChange and diagnostics from a live fatal snapshot.
-/

open IO Lean Lsp JsonRpc

private def documentUri : DocumentUri := "file:///requests_after_worker_crash.lean"

private partial def waitForFatalProgress : Ipc.IpcM Unit := do
  match ← Ipc.readMessage with
  | .notification "$/lean/fileProgress" (some params) =>
    let p : LeanFileProgressParams ← IO.ofExcept <| fromJson? (toJson params)
    if p.textDocument.uri == documentUri && p.processing.any (·.kind == .fatalError) then
      return
    waitForFatalProgress
  | .response .. | .responseError .. =>
    throw <| userError "unexpected response before the worker-exit observation"
  | _ => waitForFatalProgress

private partial def expectWorkerError (expectedId : RequestID) (expectedCode : ErrorCode) : Ipc.IpcM Unit := do
  match ← Ipc.readMessage with
  | .responseError id code _ _ =>
    unless id == expectedId && code == expectedCode do
      throw <| userError s!"expected {(toJson expectedCode).compress} for {expectedId}, got {id}/{(toJson code).compress}"
  | .response id _ => throw <| userError s!"unexpected success for {id}"
  | _ => expectWorkerError expectedId expectedCode

private def change (version : Nat) (text : String) : Ipc.IpcM Unit := do
  Ipc.writeNotification {
    method := "textDocument/didChange"
    param := {
      textDocument := { uri := documentUri, version? := some version }
      contentChanges := #[TextDocumentContentChangeEvent.fullChange text]
      : DidChangeTextDocumentParams
    }
  }

private def waitForDiagnostics (id : Nat) (version : Nat) : Ipc.IpcM Unit := do
  Ipc.writeRequest {
    id
    method := "textDocument/waitForDiagnostics"
    param := { uri := documentUri, version : WaitForDiagnosticsParams }
  }
  discard <| Ipc.readResponseAs id WaitForDiagnostics

private def testCrash (exitCode : UInt32) (expectedCode : ErrorCode) : IO Unit := do
  Ipc.runWith "lean" #["--server"] do
    Ipc.writeRequest {
      id := 0
      method := "initialize"
      param := ({ capabilities := {} } : InitializeParams)
    }
    discard <| Ipc.readResponseAs 0 InitializeResult
    Ipc.writeNotification ⟨"initialized", InitializedParams.mk⟩
    Ipc.writeNotification {
      method := "textDocument/didOpen"
      param := {
        textDocument := {
          uri := documentUri
          languageId := "lean"
          version := 1
          text := s!"import Lean\n#eval (IO.Process.forceExit {exitCode} : IO Unit)\n"
        } : DidOpenTextDocumentParams
      }
    }
    -- No file request is pending when the worker exits during initial elaboration.
    waitForFatalProgress
    for id in [1, 2] do
      Ipc.writeRequest {
        id
        method := "textDocument/hover"
        param := {
          textDocument := { uri := documentUri }
          position := { line := 1, character := 0 }
          : HoverParams
        }
      }
    expectWorkerError 1 expectedCode
    expectWorkerError 2 expectedCode

    change 2 "import Lean\n#check Nat\n"
    waitForDiagnostics 3 2
    change 3 "import MissingModuleForWorkerCrashTest\n"
    waitForFatalProgress
    waitForDiagnostics 4 3
    waitForDiagnostics 5 3

    Ipc.writeNotification {
      method := "textDocument/didClose"
      param := { textDocument := { uri := documentUri } : DidCloseTextDocumentParams }
    }
    Ipc.writeRequest {
      id := 6
      method := "workspace/symbol"
      param := { query := "" : WorkspaceSymbolParams }
    }
    -- An error reply must not leave the rejected IDs queued for replay or close-time errors.
    discard <| Ipc.readResponseAs 6 (Array SymbolInformation)
    Ipc.shutdown 7
    assert! (← Ipc.waitForExit) == 0

public def main : IO Unit := do
  testCrash 1 .workerExited
  testCrash 3 .workerCrashed
