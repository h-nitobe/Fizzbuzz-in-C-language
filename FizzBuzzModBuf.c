/**
*	@file		FizzBuzzModBuf.c
*	@brief		剰余でFizzBuzz バッファ操作版
*	@author		新渡戸広明
*	@date		2022/02/06
*	@details	FizzBuzzを剰余で判定する　文字列関数を駆使
*/

#include	<stdio.h>	// for printf(), sprintf()
#include	<stdlib.h>	// for atoi()
#include	<string.h>	// for strcpy(), strcat(), strlen()

int main(int argc, char *argv[])
{
	int	max, i;
	char	buff[16];
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：FizzBuzzMod 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1; i <= max; i++) {
		strcpy(buff, "");		// バッファクリア
	
		if (!(i % 3)) {
			strcpy(buff, "Fizz");	// "Fizz"を上書き
		}
		
		if (!(i % 5)) {
			strcat(buff, "Buzz");	// "Buzz"を追記
		}
		if (!strlen(buff)) {		// バッファが空だったら
			sprintf(buff, "%d", i);	// 数字を書く
		}
		printf("%s ", buff);
	}
	printf("\n");
	
	return 0;
}
