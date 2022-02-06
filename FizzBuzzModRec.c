/**
*	@file		FizzBuzzModRec.c
*	@brief		再帰呼び出しでFizzBuzz
*	@author		新渡戸広明
*	@date		2022/02/06
*	@details	
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

void fizzbuzz(int num);

int main(int argc, char *argv[])
{
	int	max;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	fizzbuzz(max);
	
	return 0;
}

void fizzbuzz(int num)
{
	int	count = 0;
	
	if (num) {
		fizzbuzz(num - 1);	// 再帰呼び出し
		
		if (!(num % 3)) {
			count = printf("Fizz");
		}
		if (!(num % 5)) {
			count += printf("Buzz");
		}
		if (!count) {
			printf("%d", num);
		}
		printf(" ");
	} else {
		printf("\n");
	}
		
}
