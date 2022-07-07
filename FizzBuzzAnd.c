/**
*	@file		FizzBuzzAnd.c
*	@brief		論理積で判定
*	@author		新渡戸広明
*	@date		2022/02/11
*	@details	下駄を履かせて２の冪乗でラウンドアップ
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int		max, i;
	int		fizz = 0, buzz = 0;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1; i <= max; i++) {

		if (!((++fizz + 5) & 7)) fizz = 0;
		if (!((++buzz + 3) & 7)) buzz = 0;

		if (!fizz) printf("Fizz");
		if (!buzz) printf("Buzz");
		if (fizz && buzz) printf("%d", i);
		printf(" ");
	}
	printf("\n");

	return 0;
}
