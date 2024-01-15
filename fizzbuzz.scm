; fizzbuzz.scm
; 一般的な解法の Scheme による実装
; 2024/01/16
; Studying in 新渡戸広明
;
; RosettaCode FizzBuzz
; https://rosettacode.org/wiki/FizzBuzz#Scheme
;

(do ((i 1 (+ i 1)))
    ((> i 100))
    (display
      (cond ((= 0 (modulo i 15)) "FizzBuzz")
            ((= 0 (modulo i 3))  "Fizz")
            ((= 0 (modulo i 5))  "Buzz")
            (else                i)))
    (display " "))
