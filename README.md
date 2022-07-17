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
   1. 純粋三項演算子版　・・・・・・・・・・[FizzBuzzModTriPure.c](FizzBuzzModTriPure.c)
   1. 純粋三項演算子版２・・・・・・・・・・[FizzBuzzModTriPure2.c](FizzBuzzModTriPure2.c)
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
   1. ループの中で判断をしない新井田教授版・・[FizzBuzzNIIDA.c](FizzBuzzNIIDA.c)
1. i%15 が循環することに気づいた？
   1. Switch 文判定・・・・・・・・・・・・・[FizzBuzzSw.c](FizzBuzzSw.c)
   1. テーブル参照・・・・・・・・・・・・・[FizzBuzzTbl.c](FizzBuzzTbl.c)
   1. 関数ポインタ配列参照・・・・・・・・・[FizzBuzzFnc.c](FizzBuzzFnc.c)
   1. 最大公約数を利用・・・・・・・・・・・[FizzBuzzGcd.c](FizzBuzzGcd.c)
1. 十進数操作（まどろっこい）・・・・・・・・[FizzBuzzDec.c](FizzBuzzDec.c)
1. 三角関数で判定・・・・・・・・・・・・・・[FizzBuzzSin.c](FizzBuzzSin.c)
1. ファイル操作版・・・・・・・・・・・・・・[FizzBuzzFile.c](FizzBuzzFile.c)
1. ロゼッタコードでちょっと気になるFizzBuzz
   1. FizzBuzzR1 ・・・・・・・・・・・・・[FizzBuzzRC1.c](FizzBuzzRC1.c)
   1. FizzBuzzR2 ・・・・・・・・・・・・・[FizzBuzzRC2.c](FizzBuzzRC2.c)
   1. FizzBuzzR3 (Vc7ではコンパイルできない)・・[FizzBuzzRC3.c](FizzBuzzRC3.c)
   1. FizzBuzzR4 ・・・・・・・・・・・・・[FizzBuzzRC4.c](FizzBuzzRC4.c)
   1. FizzBuzzR5 ・・・・・・・・・・・・・[FizzBuzzRC5.c](FizzBuzzRC5.c)
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

1. PDP11/45 unixV7 でFizzBuzz・・・・・・・・[FizzBuzzUNIX7.cpp](FizzBuzzUNIX7.cpp)

PDP11/45 UNIX V7 でFizzBuzz。実機があるわけではない。Windows 11 上の WSL2 上の debian bullseye 上の simh PDP11/45 エミュレータ上の UNIX V7 で実行してみる。

   難儀な点

   1. CコンパイラがK&Rだ。
   1. この当時バックスペースはない。　
      "#"がそれに相当する。#include の # はエスケープが必要。
      当時テレタイプが主流だからカーソルが戻ると読みにくい。
   1. この当時まだスクリーンエディタ vi がない。
      ラインエディタ ed でちまちま入力する。
      stdin から cat で流し込むけどね。
   1. この当時 stdlib.h はまだない。
      atoi() は K&R ではサンプルコードとして掲載されている。
   1. この当時の cc はエラーチェックを手抜きしている。
      lint コマンドによるエラーチェックが必須。
  
   ![pdp11_45.jpg](pdp11_45.jpg)
   ![unixV7.png](unixV7.png)

17. MC68000 CP/M68K で FizzBuzz・・・・・・・・[FizzBuzzCPM68K.c](FizzBuzzCPM68K.c)

MC68000 CP/M68K で FizzBuzz。実機があるわけではない。Windows 11 上の WSL2 上の debian bullseye 上の musashi MC68000エミュレータ上の CP/M-68K で実行してみる。現状の git ソースは makefile がめちゃくちゃで build 不能。某所に古いのがあったのでそれを利用。本来、CP/M-68K の Cコンパイラは、CP68（プリプロセッサ）～C068（パーサ）～C168（コードジェネレータ）～AS68（アセンブラ）～LO68（リンカ）と個別に処理しなければならなかったはずだが、CC コマンド一発で .REL（リロケータブル実行ファイル）が生成される。

   難儀な点

   1. CコンパイラがK&Rだ。ま、時期的にそうだろうな。
   1. エディタが ED か uEMACS しかない。新渡戸 EMACS に弱い。

   ![cpm68k_1.png](cpm68k_1.png)
   ![cpm68k_2.png](cpm68k_2.png)
   
18. J3100 DOSV で FizzBuzz・・・・・・・・[FizzBuzzDOSBOX.c](FizzBuzzDOSBOX.c)

J3100 DOSV で FizzBuzz。実機はあるが納戸の肥やし。Windows 11 上の WSL2 上の debian bullseye 上の DOSBOXJエミュレータ上の DOS で実行してみる。DOSBOXJ すげー　こいつら本気だ。昔所有していたJ3100SGTのハードディスクの内容をKERMIT（RS232C）でサルベージしたデータであっさり動いた。MIFESエディタも何の細工も無しで動いた。サルベージしたデータには、microsoft c v6.00a と Borland Turbo C++ v1.01 がインストール済みである。今回は MC6 で。

   [Salvage HDD data of J3100SGT101](https://www.saigyo.org/blog/index.php?mode=pages&aim=Salvage) データサルベージの顛末

   ![DSC00388.jpg](DSC00388.jpg)
   ![dosbox_1.png](dosbox_1.png)
   ![dosbox_2.png](dosbox_2.png)
   
19. MAC(MC68000) で FizzBuzz・・・・・・・・・・・[FizzBuzzVMAC.c](FizzBuzzVMAC.c)

MAC(MC68000) で FizzBuzz。実機はもうない。ヤフオクで売っ払っちまった。Windows 11 上の Mini vMac エミュレータで実行してみる。LightspeedC 3.0.2 改め THINK C 3.0.2 である。エディタは勝手に起動して勝手に動く。何者かは分からない。キーは配列が微妙に違う。設定の仕方が分からない。探り探りだ。

   ![vmac_1.png](vmac_1.png)
   ![vmac_2.png](vmac_2.png)
   ![vmac_3.png](vmac_3.png)
   
2022/07/15 追記

   ![vmac_4.png](vmac_4.png)


20. Altair8800(Z80) で FizzBuzz・・・・・・・・・・・[FizzBuzzCPM80.c](FizzBuzzCPM80.c)

Altair8800(Z80) で FizzBuzz。実機はない。Windows 11 上の simh Z80エミュレータで実行してみる。エディタは ED しかない。orz　Cコンパイラは BDS-C である。リンカ clink でリンクしてあげないと実行ファイルが出来ない。

   ![Altair8800_Lamp.jpg](Altair8800_Lamp.jpg)
   ![cpm80_1.png](cpm80_1.png)
   ![cpm80_2.png](cpm80_2.png)
   ![cpm80_3.png](cpm80_3.png)

21. FreeDOS で FizzBuzz・・・・・・・・・・・・・[FizzBuzzFDOS.c](FizzBuzzFDOS.c)

FreeDOS で FizzBuzz。Windows 11 上の Oracle VM  VirtualBox 上の FreeDOS 1.3 で実行してみる。なんと未だにメンテナンスされている。スクリーンエディタ EDIT 、VIM が同梱されている。新渡戸 vi は得意だ。同梱されている Cコンパイラは watcom C 。アセンブラソース出力オプションが無いなぁ・・・と思っていたら、逆アセンブラ wdis で .obj ファイルを処理して .asm ファイルにリダイレクトすれば得られる。
ときに、起動画面で DHCP で IPアドレスを取得しているが、何をする気だ freedos ！

   ![freedos_0.png](freedos_0.png)
   ![freedos_1.png](freedos_1.png)
   ![freedos_2.png](freedos_2.png)
   ![freedos_3.png](freedos_3.png)
   ![freedos_4.png](freedos_4.png)
   ![freedos_5.png](freedos_5.png)

22. FreeDOS で FizzBuzz 2・・・・・・・・・・・・・[FizzBuzzFDOS.c](FizzBuzzFDOS.c)

FreeDOS が動いているうちに LSI-C（試食版）の挙動を確認しておこう。K&R「プログラミング言語C」（第2版ではない）の「付録B」に、BDS-C か LSI-C で試してみぃ・・・と書いてある。ソースは前項と一緒。
仮想FDの取り扱いで結構苦労しました。

   ![lsic.png](lsic.png)

23. FreeDOS で FizzBuzz 3・・・・・・・・・・・・・[FizzBuzzFDOS.c](FizzBuzzFDOS.c)

Trying to make the hippo dance is not really a lot of fun.（カバにダンスを踊らせるのは、あまり楽しいことではない）。
というわけで、カバにダンスを踊らせてみよう。djgpp（gcc）はボーナスCDに同梱されている。環境設定でちょっと苦労。ソースは前項と一緒。
exe のサイズを比較してみよう。動作は全部一緒（に見える）。

        1. watcom c   8,800
        2. Bruce's C  3,300
        3. LSI C     12,087
        4. gcc       80,770

カバだ。

   ![freedos_gcc.png](freedos_gcc.png)



24. FreeDOS で FizzBuzz 4・・・・・・・・・・・・・[FizzBuzzFDOS.c](FizzBuzzFDOS.c)

子曰、温故而知新、可以為師矣。というわけで、Aztec C と Lattice C の登場である。野放図にCコンパイラをインストールしてきたので環境変数が干渉しだした。コマンド入力をフルパスにして頑張る。

Lattice C は .obj の生成までだ。リンカは Microsoft 8086 Object Linker を呼び出している。なるほどね。このあと、Lattice C は Microsoft C になってしまう。

exe のサイズを比較してみよう。選択するライブラリで大幅に変化するであろう。が、全て標準のライブラリを使用。動作は全部一緒（に見える）。

        1. watcom c   8,800
        2. Bruce's C  3,300
        3. LSI C     12,087
        4. gcc       80,770
        5. Aztec C   16,099
        6. Lattice C 15,682

   ![AztecC.png](AztecC.png)
   ![LatticeC_1.png](LatticeC_1.png)
   ![LatticeC_2.png](LatticeC_2.png)
   
25. debian で FizzBuzz ・・・・・・・・・・・・・[FizzBuzzDebian.c](FizzBuzzDebian.c)

OSと畳は新しい方が良い。というわけで、windows11 上の WSL2 上の debian bullseye 上の三種のコンパイラを比較してみる。FizzBuzzを100万回回すソースファイルをコンパイルして、そのコンパイル時間、実行ファイルサイズ、実行時間を計測する。コンソール出力は /dev/null にリダイレクトして捨てる。

   | コンパイラ | コンパイル時間 | 実行ファイルサイズ | 実行時間 |
   | ---------- | ------------: | -----------------: | -------: |
   | gcc debian 10.2.1-6 | 0.340s | 16664byte | 0.060s |
   | debian clang 11.0.1-2 | 0.370s | 16584byte | 0.059s |
   | tcc version 0.9.27 | 0.013s | 3244byte | 0.117s |

実行速度は gcc、clang が速い。コンパイル時間、実行ファイルサイズは tcc に軍配が上がった。

   ![debian_1.png](debian_1.png)
   ![debian_2.png](debian_2.png)
   
 26.  Family Computer と GameBoy で FizzBuzz ・・・・・・ [FizzBuzzFC.c](FizzBuzzFC.c) [FizzBuzzGB.c](FizzBuzzGB.c)

人生にリセットボタンはない。コンティニューはある。by ラコスケ（どうぶつの森）というわけで、ファミリーコンピュータとゲームボーイで FizzBuzz 。実機はとっくのとおに無い。windows11 上の DOS窓上の、cc65, gbz80 開発環境と nesterj, BGB エミュレータで実行する。

   ![FamilyComputer.png](FamilyComputer.png)
   ![GameBoy.png](GameBoy.png)

 27.  【番外編】Nintendo Switch で FizzBuzz ・・・・・・ [FIZZBUZZ.BAS](FIZZBUZZ.BAS)

「ハードはソフトを遊んでもらうために仕方なく買ってもらう箱である」by 任天堂元社長山内溥 というわけで、息子がお年玉で仕方なく買った Switch を取り上げて、プチコン４（SmileBASIC 4.4.5）をインストールしてFizzBuzz。BASIC なんて40年ぶりに触ったわ。

リファレンスマニュアルの「制御命令」が＠ラベル～ GOTO から始まる。スパゲティプログラマ養成ギブスだ。

   ![Switch_1.png](Switch_1.png)
   ![Switch_2.png](Switch_2.png)

 28. moto g9 (Android) で FizzBuzz ・・・・・・[FizzBuzzDebian.c](FizzBuzzDebian.c)

Talk is cheap. Show me the code.おしゃべりはいいから、コード見せろよ。Linus Torvalds（リーナス・トーバルズ）というわけで、Moto g9 (Android) で、お出かけ先で Fizzbuzz。昔は Android の root を奪取して debian をインストールするという荒業が必要だったが、今は、debian noroot というアプリがある。いい時代だなぁ。

   ![android_1.png](android_1.png)
   ![android_2.png](android_2.png)
   ![android_3.png](android_3.png)
   ![android_4.png](android_4.png)

 29. 【番外編】Androidアプリ で FizzBuzz

「画面は青かった」[通信用語の基礎知識](https://www.wdic.org/w/SCI/画面は青かった) というわけで、Androidアプリに FizzBuzz はないだろうか・・・あった。ゲーム版はムズイぞ。

   ![appli_1.png](appli_1.png)
   ![appli_2.png](appli_2.png)
   ![appli_3.png](appli_3.png)
   ![appli_4.png](appli_4.png)

　30. 【番外編】Android Studio で FizzBuzz・・・・・・[MainActivity.java](MainActivity.java)　[activity_main.xml](activity_main.xml)

「そう囁くのよ、私のゴーストが。」草薙素子　というわけで、私のゴーストが Android Studio で FizzBuzzアプリを作れと囁くのでやってみた。手に入れたのは Android Studio Bumblebee | 2021.1.1 Patch 「トランスフォーマー」かい？オブジェクト指向ではない爺様はひいひい言いながら JAVA でコーディングする。右下のエミュレータで動いた動いた。気が済んだ。

.java は修正追加箇所をコメントできるが、.xmlのタグの中はコメントできない。activity_main.xml 追加したのは、L9、L14。

   ![AndroidStudio.png](AndroidStudio.png)

　31. 【番外編】kotlin で FizzBuzz・・・・・・[fizzbuzz.kt](fizzbuzz.kt)　[FizzBuzz.java](FizzBuzz.java)
 
 へんじがない。ただの　しかばね　のようだ。前項の Android Studio は java がデフォルトだが、kotlin の選択肢もある。コトリンって何だ？今後 kotlin による Android の開発が増えてくるのだそうだ。
 
 Kotlinで書かれたコードはJVM（Java Virtual Machine：Java仮想マシン）で動作するJavaバイトコード（おなじみのclassファイル）へコンパイルされる。このようなプログラミング言語をJVM言語と呼ぶことがある。
 
kotrinc javac は .class ファイルを生成するコンパイラ。kotlin java は JVM。つまり、kotlin = java。スクリーンショットを見ていただくと分るが、コンパイルされた .class ファイルは相互で実行可能。

   ![kotlin.png](kotlin.png)
   ![java.png](java.png)

　32.  RISC-V で FizzBuzz・・・・・・[FizzBuzzRISCV.c](FizzBuzzRISCV.c)
 
No! Try not. Do. Or do not. There is no try. (Yoda) というわけで、RISC-V を試してみる。WSL2 上で QEMU やら TinyEmu なんかをトライしてみたが、web上で試せるじゃないか！

[JSLinux](https://bellard.org/jslinux/)

おお、RISC-V のアセンブリ言語だ！

   ![FizzBuzzRISCV_01.png](FizzBuzzRISCV_01.png)
   ![FizzBuzzRISCV_02.png](FizzBuzzRISCV_02.png)
   ![FizzBuzzRISCV_03.png](FizzBuzzRISCV_03.png)
   ![FizzBuzzRISCV_04.png](FizzBuzzRISCV_04.png)

33. 【番外編】FM11 OS9 BASIC09 で FizzBuzz・・・・・・[FizzBuzzFM11](FizzBuzzFM11)

I got a bad feeling about this.(Han Solo) というわけで、FM11エミュレータ OS9 basic09 で FizzBuzz 。
Microware C Compiler で試したかったが、ネット上に落ちているわけもなく、標準装備の basic09 で実装。
日付に 22/07/15　と入力すると、 July 15, 1922 となる。2000年問題未対応だ。

[FM11](http://nanno.bf1.jp/softlib/man/fm11/)

   ![fm11_01.png](fm11_01.png)
   ![fm11_02.png](fm11_02.png)

34. X68000 Human68k XC で FizzBuzz・・・・・・[FizzBuzzX68k.c](FizzBuzzX68k.c)[FizzBuzzX68k.s](FizzBuzzX68k.s)

Don't think... feel...(Yoda) というわけで、 XM6(X68000エミュレータ）on　Win11　/ Human68k / XC で FizzBuzz 。

[XM6](http://retropc.net/pi/xm6/index.html)

   ![XM6_1.png](XM6_1.png)
   ![XM6_2.png](XM6_2.png)
   ![XM6_3.png](XM6_3.png)
   
