# Fizzbuzz-in-C-language
FizzBuzz をC言語で実装してみよう
## お品書き
1. 剰余で判定
   1. 割合素直なバージョン[FizzBuzzMod.c](FizzBuzzMod.c)
   1. 短絡評価バージョン（使っちゃダメ）[FizzBuzzModSce.c](FizzBuzzModSce.c)
   1. printf()の戻り値で判定[FizzBuzzModRet.c](FizzBuzzModRet.c)
1. カウンタで判定
1. オフセットで判定
1. 最小公倍数で循環することに気づいた？
   1. Switch 文判定
   1. テーブル参照
   1. 関数ポインタ配列参照
