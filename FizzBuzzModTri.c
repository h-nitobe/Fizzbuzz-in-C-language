/**
*	@file		FizzBuzzModTri.c
*	@brief		剰余でFizzBuzz　三項演算子
*	@author		新渡戸広明
*	@date		2022/02/06
*	@details	三項演算子でがんばる
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	max, i;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1; i <= max; i++) {
		printf(!(i % 3) ? "Fizz" : "");
		printf(!(i % 5) ? "Buzz" : (i % 3) ? "%d" : "", i);
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
