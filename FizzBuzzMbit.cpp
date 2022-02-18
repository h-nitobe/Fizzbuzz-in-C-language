/**
*   @file       FizzBuzzMbit.cpp
*   @brief      micro bit で FizzBuzz
*   @author     新渡戸広明
*   @date       2022/02/11
*   @details    
*/
#include "MicroBit.h"

MicroBit uBit;

int main()
{
    uBit.init();

    for (int i = 1; i < 35; i++) {
        if (!(i % 3)) uBit.display.scroll("Fizz");
        if (!(i % 5)) uBit.display.scroll("Buzz");
        if (i % 3 && i % 5) (uBit.display.scroll(i));
        uBit.display.scroll(" ");
    }
    
    release_fiber();	// メインファイバーを解放
}

