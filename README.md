# Fizzbuzz-in-C-language
FizzBuzz をC言語で実装してみよう。

1から順に数を数え上げてゆき、3の倍数なら「Fizz」、5の倍数なら「Buzz」、両方の倍数（15の倍数）なら「Fizz Buzz」、いずれでもなければその数を出力する。
   ![FizzBuzz](FizzBuzz.png)
### お品書き
1. 剰余で判定
   1. 割合素直版・・・・・・・・・・・・・・[FizzBuzzMod.c](FizzBuzzMod.c)
   1. 再帰呼び出し版・・・・・・・・・・・・[FizzBuzzModRec.c](FizzBuzzModRec.c)
   1. printf() の戻り値で判定・・・・・・・・[FizzBuzzModRet.c](FizzBuzzModRet.c)
   1. 三項演算子でがんばってみる・・・・・・[FizzBuzzModTri.c](FizzBuzzModTri.c)
   1. バッファ操作版文字列関数を駆使・・・・[FizzBuzzModBuf.c](FizzBuzzModBuf.c)
   1. 文字列を玩ぶ・・・・・・・・・・・・・[FizzBuzzModStr.c](FizzBuzzModStr.c)
   1. 標準ライブラリの div を利用する・・・・[FizzBuzzModDiv.c](FizzBuzzModDiv.c)
   1. 剰余を自前で実装する（無駄）・・・・・[FizzBuzzModOwn.c](FizzBuzzModOwn.c)
   1. 剰余を自前で実装する２（ネタだ）・・・[FizzBuzzModOwn2.c](FizzBuzzModOwn2.c)
   1. 短絡評価版（使っちゃダメ）・・・・・・[FizzBuzzModSce.c](FizzBuzzModSce.c)
1. カウンタで判定・・・・・・・・・・・・・・[FizzBuzzCnt.c](FizzBuzzCnt.c)
1. オフセットで判定
   1. 到達値・・・・・・・・・・・・・・・・[FizzBuzzOfs.c](FizzBuzzOfs.c)
   1. 目標値・・・・・・・・・・・・・・・・[FizzBuzzOfs2.c](FizzBuzzOfs2.c)
1. シフトで判定
   1. 1ビットの1を右シフトする・・・・・・・[FizzBuzzShlr.c](FizzBuzzShlr.c)
   1. 1ビットの1を左シフトする・・・・・・・[FizzBuzzShll.c](FizzBuzzShll.c)
   1. 指折り数えてみる（右シフトだけどね）・[FizzBuzzFin.c](FizzBuzzFin.c)
1. 排他的論理和で判定・・・・・・・・・・・・[FizzBuzzExor.c](FizzBuzzExor.c)
1. 論理積で判定・・・・・・・・・・・・・・・[FizzBuzzAnd.c](FizzBuzzAnd.c)
1. 循環配列で判定・・・・・・・・・・・・・・[FizzBuzzArr.c](FizzBuzzArr.c)
1. i%15 が循環することに気づいた？
   1. Switch 文判定・・・・・・・・・・・・・[FizzBuzzSw.c](FizzBuzzSw.c)
   1. テーブル参照・・・・・・・・・・・・・[FizzBuzzTbl.c](FizzBuzzTbl.c)
   1. 関数ポインタ配列参照・・・・・・・・・[FizzBuzzFnc.c](FizzBuzzFnc.c)
   1. 最大公約数を利用・・・・・・・・・・・[FizzBuzzGcd.c](FizzBuzzGcd.c)
1. 十進数操作（まどろっこい）・・・・・・・・[FizzBuzzDec.c](FizzBuzzDec.c)
1. 三角関数で判定・・・・・・・・・・・・・・[FizzBuzzSin.c](FizzBuzzSin.c)
1. ファイル操作版・・・・・・・・・・・・・・[FizzBuzzFile.c](FizzBuzzFile.c)
1. GR-SAKURA(RX63N)でFizzBuzz・・・・・・・[FizzBuzz.c](FizzBuzz.c)

   仕様変更：　1~15を2進数でLEDに表示　15：^ド　3: ミ　5:ソ　その他:ド　を発音する
   
   クロック設定関数 initBASE() は自前で用意してください。
   ![GR_SAKURA.png](GR_SAKURA.png)
   ![VID_20220216_193000493](VID_20220216_193000493.jpg)
   
1. WIO TERMINAL(ATSAMD51)でFizzBuzz・・・・[FizzBuzz.ino](FizzBuzz.ino)

   C言語じゃなくArduinoのスケッチ(何を隠そうC++)だけどね。"30" の "FizzBuzz" でバグってる。 ”Fizz" と "Buzz" の間にスペースが入っている。俺のせいじゃない。  　
  ![IMG_20220217_123503803.jpg](IMG_20220217_123503803.jpg)
  
1. NUCLEO-F411RE(STM32F411RE)でFizzBuzz・・[FizzBuzz.cpp](FizzBuzz.cpp)

   こいつもC++だ。出力が更に貧弱なので、USBシリアルでPCのターミナルエミュレータに文字を投げる。きょうび Web 上で開発可能だ。[Mbed Online Compiler](https://os.mbed.com/docs/mbed-os/v6.15/quick-start/build-with-the-online-compiler.html)
   ![IMG_20220218_115104882.jpg](IMG_20220218_115104882.jpg)
   ![F411RE.png](F411RE.png)
   ![TeraTerm.png](TeraTerm.png)

1. micro bit(nRF51822)でFizzBuzz・・・・・・[FizzBuzzMbit.cpp](FizzBuzzMbit.cpp)

   [Mbed Online Compiler](https://os.mbed.com/docs/mbed-os/v6.15/quick-start/build-with-the-online-compiler.html) は micro bit もビルドできる。
   
   [Microsoft MakeCode for micro:bit](https://makecode.microbit.org/?lang=ja)じゃなくともC++で構築する方法もあるんだ。
   ![IMG_20220218_132559558.jpg](IMG_20220218_132559558.jpg)
