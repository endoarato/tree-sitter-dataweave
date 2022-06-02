%dw 2.0


// comment
input payload json
input key json

var a = 123

type A = Number

type B = 18


fun f()= payload
---

do {
  var payload: A = 34
  ---
  // [a, b, payload, c, f()]
  [
    typeOf(A),
    typeOf(a),
    payload,
    key
  ]
}
