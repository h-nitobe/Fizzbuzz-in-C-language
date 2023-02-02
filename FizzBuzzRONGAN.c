/**
*	@file		FizzBuzzRONGAN.c
*	@brief		RONGAN NANO でFizzBuzz
*	@author		新渡戸広明
*	@date		2023/02/02
*	@details	
*/

#include "stdio.h"
#include "lcd/lcd.h"

int main( void ) {
	int     x = 0, y = 0, len;
    char    msg[32];

	Lcd_Init();				// lcdを初期化する
	LCD_Clear( BLACK );		// lcdをクリアする
	BACK_COLOR = BLACK;		// 文字の背景色を指定

    for (int i = 1;  i <= 23; i++) {
        len = sprintf(msg, "%s%s", i%3? "": "Fizz", i%5? "":"Buzz");
        if (!msg[0]) len = sprintf(msg, "%d", i);
        if (152 < (x + len * 8)) x = 0, y += 16;
        LCD_ShowString(x, y, msg, GREEN);
        x += (len+1) * 8;
    }

	while( 1 );
}
