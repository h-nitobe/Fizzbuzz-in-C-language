/**
*	@file		FizzBuzzRONGAN.c
*	@brief		RONGAN NANO ��FizzBuzz
*	@author		�V�n�ˍL��
*	@date		2023/02/02
*	@details	
*/

#include "stdio.h"
#include "lcd/lcd.h"

int main( void ) {
	int     x = 0, y = 0, len;
    char    msg[32];

	Lcd_Init();				// lcd������������
	LCD_Clear( BLACK );		// lcd���N���A����
	BACK_COLOR = BLACK;		// �����̔w�i�F���w��

    for (int i = 1;  i <= 23; i++) {
        len = sprintf(msg, "%s%s", i%3? "": "Fizz", i%5? "":"Buzz");
        if (!msg[0]) len = sprintf(msg, "%d", i);
        if (152 < (x + len * 8)) x = 0, y += 16;
        LCD_ShowString(x, y, msg, GREEN);
        x += (len+1) * 8;
    }

	while( 1 );
}
