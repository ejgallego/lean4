import Lean.Language.Lean
import Lean.Server.Requests

/-!
Tests that stale direct import metadata is available through the request context API used by
server-side LSP request handlers.
-/

open Lean
open Lean.Server
open Lean.Server.FileWorker

def mkInitSnap (doc : DocumentMeta) : IO Language.Lean.InitialSnapshot := do
  let setupImports (_ : Elab.HeaderSyntax) :
      Language.ProcessingT IO (Except Language.Lean.HeaderProcessedSnapshot Language.Lean.SetupImportsResult) := do
    return .ok {
      mainModuleName := doc.mod
      isModule := false
      imports := #[]
      opts := {}
    }
  let processor ← Language.mkIncrementalProcessor (Language.Lean.process setupImports)
  processor doc.mkInputContext

def main : IO Unit := do
  let staleImports : StaleImports := {
    directImports := #[
      {
        module := `SaveSmoke.B
        sourcePath? := some "SaveSmoke/B.lean"
        oleanPath? := some ".lake/build/lib/lean/SaveSmoke/B.olean"
      }
    ]
  }
  let text := "import SaveSmoke.B\n"
  let docMeta : DocumentMeta := {
    uri := "file:///SaveSmoke/A.lean"
    mod := `SaveSmoke.A
    version := 0
    text := FileMap.ofString text
    dependencyBuildMode := .never
  }
  let initSnap ← mkInitSnap docMeta
  let stickyDiagsRef ← IO.mkRef {}
  let staleImportsRef ← IO.mkRef staleImports
  let diagnosticsMutex ← Std.Mutex.new { stickyDiagsRef }
  let core : EditableDocumentCore := {
    «meta» := docMeta
    initSnap
    diagnosticsMutex
    staleImportsRef
  }
  let doc : EditableDocument := { core with reporter := ServerTask.pure () }
  let cancelTk ← RequestCancellationToken.new
  let hLog ← IO.getStderr
  let rc : RequestContext := {
    rpcSessions := {}
    doc
    hLog
    initParams := { capabilities := {} }
    cancelTk
    serverRequestEmitter := fun _ _ =>
      return ServerTask.pure (.failure .methodNotFound "unexpected server request")
  }
  let got ← RequestM.runInIO RequestM.getStaleImports rc
  if got.directImports.map (·.module) != #[`SaveSmoke.B] then
    throw <| IO.userError s!"unexpected stale imports: {repr got}"
  core.setStaleImports {}
  let got ← RequestM.runInIO RequestM.getStaleImports rc
  unless got.directImports.isEmpty do
    throw <| IO.userError s!"expected stale imports to be cleared: {repr got}"
