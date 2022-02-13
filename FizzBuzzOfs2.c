/**
*	@file		FizzBuzzOfs2.c
*	@brief		目標値オフセットでFizzBuzz
*	@author		新渡戸広明
*	@date		2022/02/13
*	@details	目標値オフセットと比較します
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	nextFizz = 3, nextBuzz = 5;	// 今回は目標値オフセットとして使います
	int	max, i, count;
	
	if (argc < 2) {					// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	max = atoi(argv[1]);			// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1; i <= max; i++) {
		count = 0;
		
		if (nextFizz <= i) {		// < はあり得ないから == でもいいんだけどね。念のため。
			count = printf("Fizz");
			nextFizz += 3;			// Fizz 目標値オフセットを３増やします
		}
		
		if (nextBuzz <= i) {		// < はあり得ないから == でもいいんだけどね。念のため。
			count += printf("Buzz");
			nextBuzz += 5;			// Buzz 目標値オフセットを５増やします
		}
		if (!count) {				// 何も書き出していなければ
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
