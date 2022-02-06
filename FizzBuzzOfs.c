/**
*	@file		FizzBuzzOfs.c
*	@brief		オフセットでFizzBuzz
*	@author		新渡戸広明
*	@date		2022/02/06
*	@details	オフセットを引きます
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	fizz = 0, buzz = 0;	// 今回はオフセットとして使います
	int	max, i, count;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1; i <= max; i++) {
		count = 0;
		
		if (3 <= (i - fizz)) {
			count = printf("Fizz");
			fizz += 3;	// Fizz オフセットを３増やします
		}
		
		if (5 <= (i - buzz)) {
			count += printf("Buzz");
			buzz += 5;	// Buzz オフセットを５増やします
		}
		if (!count) {		// 何も書き出していなければ
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
