/**
*	@file		FizzBuzzSin.c
*	@brief		三角関数でFizzBuzz
*	@author		新渡戸広明
*	@date		2022/02/06
*	@details	そこまでするか？
*/
#define	_USE_MATH_DEFINES	// for M_PI

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()
#include	<math.h>	// for sin()

int main(int argc, char *argv[])
{
	int	fizz = 0, buzz = 0;		// 今回は倍数か否かのフラグとして使います
	int	max, i;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1; i <= max; i++) {
		fizz = !(int)(2 * sin(M_PI / 3 * i));
		buzz = !(int)(2 * sin(M_PI / 5 * i));

		if (fizz) {
			printf("Fizz");
		}
		
		if (buzz) {
			printf("Buzz");
		}
		
		if (!fizz && !buzz) {
			printf("%d", i);
		}
		
		printf(" ");
	}
	
	printf("\n");
	return 0;
}
