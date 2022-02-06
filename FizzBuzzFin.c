/**
*	@file		FizzBuzzFin.c
*	@brief		指折り数えてFizzBuzz
*	@author		新渡戸広明
*	@date		2022/02/06
*	@details	ビットシフトだけどね
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

#define		FIZZ	0x7
#define		BUZZ	0x1f

int main(int argc, char *argv[])
{
	int	fizz = FIZZ, buzz = BUZZ;	// fizz 0b0000111 buzz 0b00011111 これらを右シフトします
	int	max, i, count = 0;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1; i <= max; i++) {
		count = 0;
		fizz >>= 1;		// 1ビット右シフト
		buzz >>= 1;		// 1ビット右シフト
	
		if (!fizz) {		// シフトアウト
			count = printf("Fizz");
			fizz = FIZZ;
		}
		
		if (!buzz) {		// シフトアウト
			count += printf("Buzz");
			buzz = BUZZ;
		}
		if (!count) {
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
