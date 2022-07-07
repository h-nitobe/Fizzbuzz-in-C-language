/**
*	@file		FizzBuzzCnt.c
*	@brief		カウンタでFizzBuzz
*	@author		新渡戸広明
*	@date		2022/02/06
*	@details	FizzBuzzをカウンタで判定する
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	fizz = 0, buzz = 0;		// 今回はカウンタとして使います
	int	max, i;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1; i <= max; i++) {
		if (++fizz >= 3) fizz = 0;
		if (++buzz >= 5) buzz = 0;
	
		if (!fizz) {
			printf("Fizz");
		}
		
		if (!buzz) {
			printf("Buzz");
		}
		
		if (fizz && buzz) {
			printf("%d", i);
		}
		
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
