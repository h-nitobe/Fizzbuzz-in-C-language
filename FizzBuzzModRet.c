/**
*	@file		FizzBuzzModRet.c
*	@brief		剰余でFizzBuzz printf関数のreturn値で判定
*	@author		新渡戸広明
*	@date		2022/02/06
*	@details	FizzBuzzを剰余で判定する
*			JIS X3010:2003「7.19.6.3 printf 関数」
*			返却値
*			printf 関数は，書き出された文字数を返す。
*			出力エラー又は表現形式エラーが発生した場合，負の値を返す。
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	max, i, count;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：FizzBuzzMod 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1; i <= max; i++) {
		count = 0;
	
		if (!(i % 3)) {
			count = printf("Fizz");
		}
		
		if (!(i % 5)) {
			count += printf("Buzz");
		}
		if (!count) {
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
