/**
*	@file		FizzBuzzShll.c
*	@brief		左シフトでFizzBuzz
*	@author		新渡戸広明
*	@date		2022/02/16
*	@details	
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int		fizz = 1, buzz = 1;	// これらの１を左シフトします
	int		max, i, count;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1; i <= max; i++) {
		if (i != 1) {
			fizz <<= 1;
			buzz <<= 1;
		}
		
		count = 0;
		if (fizz & 4) {				// 4:0b00000100 でマスク
			count += printf("Fizz");
			fizz |= 1;
		}
		
		if (buzz & 16) {			// 16:0b00010000 でマスク
			count += printf("Buzz");
			buzz |= 1;
		}
		
		if (!count) {
			printf("%d", i);
		}
		
		printf(" ");
	}
	
	printf("\n");
	
	return 0;
}
