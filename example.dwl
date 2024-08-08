%dw 2.0

// comment
input payload json
input key json

var a = 123

/*
 * Some block comment
 */
type A = Number

type B = 18


fun f() = payload
fun g(a: String, b: 18) = b
---

do {
  var payload: A = 34
  ---
  [
    typeOf(A),
    typeOf(a),
    payload,
    key
  ]
}
