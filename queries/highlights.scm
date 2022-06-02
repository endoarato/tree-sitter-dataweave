
(typeExpression) @type
(value (numberLiteral)) @number

(line_comment) @comment
(block_comment) @comment



(versionDirective) @property

(inputDirective 
  id: (nameIdentifier) @variable.input
)
(varDirective id: (nameIdentifier) @variable.var)
(typeDirective id: (nameIdentifier) @type)

(mimeType) @mime_type
(writerId) @mime_type

((selectableValues (nameIdentifier (#is-not? local)) @variable.external))
; para sobrescribir con el de su refe, tiene que matchear con algo
((selectableValues (nameIdentifier (#is? local)) @nothing))
 
[
    "var"
    "type"
    "fun"
    "do"
] @keyword