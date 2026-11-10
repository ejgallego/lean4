module

import Lean

/-! Formatter and parenthesizer generation for conditional parser combinators. -/

open Lean Parser

@[run_parser_attribute_hooks]
def conditionalBoolParser (b : Bool) : Parser :=
  if b then ident else numLit

@[run_parser_attribute_hooks]
def conditionalPropParser (n : Nat) : Parser :=
  if n = 0 then ident else numLit

@[run_parser_attribute_hooks]
def conditionalBifParser (b : Bool) : Parser :=
  bif b then ident else numLit

run_meta do
  for name in [``conditionalBoolParser.formatter, ``conditionalBoolParser.parenthesizer,
      ``conditionalPropParser.formatter, ``conditionalPropParser.parenthesizer,
      ``conditionalBifParser.formatter, ``conditionalBifParser.parenthesizer] do
    Lean.Meta.check (Lean.mkConst name)

@[run_parser_attribute_hooks]
def conditionalWrappedParser (b : Bool) : Parser :=
  (fun c => if c then ident else numLit) b

@[run_parser_attribute_hooks]
def conditionalLetParser (b : Bool) : Parser :=
  let p := if b then ident else numLit
  p

abbrev conditionalParserAlias (b : Bool) : Parser :=
  if b then ident else numLit

@[run_parser_attribute_hooks]
def conditionalAliasParser (b : Bool) : Parser :=
  conditionalParserAlias b
