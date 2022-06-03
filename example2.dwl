%dw 2.0

input payload json
input age text

var payloadCopy = payload

type AgeLimit = 18 | 21
---
do {
  var payload = 456
  ---
  [
    typeOf(payload),
    typeOf(age),
    typeOf(AgeLimit),
  ]
}
