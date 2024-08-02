; Literals
(literal) @constant)

; DataWeave Header
(header "%dw" @keyword
  name: (version) @constant
  )

; Object keys
(key) @property

; Null
(null) @keyword

; Comments
(comment) @comment

; Binary Expression
(binary_expression
    left: (left)
    operator: (operator) @operator
    right: (right)
)
