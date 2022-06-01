; locals.scm

(do_block) @local.scope

(varDirective id:(nameIdentifier) @local.definition)

(nameIdentifier) @local.reference