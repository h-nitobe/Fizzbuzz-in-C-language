/**
*	@file		FizzBuzz.cpp
*	@brief		NUCLEO-F411RE で FizzBuzz
*	@author		新渡戸広明
*	@date		2022/02/18
*	@details	C言語っぽいけど C++
*/

#include "mbed.h"

Serial pc(USBTX, USBRX);	// USB シリアルで PC と接続します
DigitalOut myled(LED1);		// LED1 を使用します

int main()
{
    pc.baud(115200);		// ボーレト設定

    for (int i = 1; i <= 401; i++) {		// モダンなコンパイラなのでここで変数宣言してもOK
        if (!(i % 3)) pc.printf("Fizz");
        if (!(i % 5)) pc.printf("Buzz");
        if (i % 3 && i % 5) pc.printf("%d", i); 
        pc.printf(" ");

        myled = !myled;		// LED1 反転
    }
    pc.printf("\n\r");		// \n だけでは復行しないのであからさまに \r
    
    while (1) ;				// 自番地ループ
}
