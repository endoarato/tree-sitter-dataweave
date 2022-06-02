; locals.scm

(mapping) @local.scope
(do_block) @local.scope
(functionDirective) @local.scope
(lambdaLiteral) @local.scope

(varDirective id: (nameIdentifier) @local.definition)
(inputDirective id: (nameIdentifier) @local.definition)
(typeDirective id: (nameIdentifier) @local.definition)
(function_parameter (nameIdentifier) @local.definition)
(parameter id: (nameIdentifier) @local.definition)

(selectableValues (nameIdentifier) @local.reference ) 