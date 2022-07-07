/**
*	@file		FizzBuzzModDiv.c
*	@brief		剰余でFizzBuzz 標準ライブラリを利用する
*	@author		新渡戸広明
*	@date		2022/02/10
*	@details	% でいいじゃないか
*/
#include	<stdio.h>
#include	<stdlib.h>	// for atoi(), div()

/**
*	@fn			int main(int argc, char *argv[])
*	@brief 		main 関数
*	@param[in]	argc , argv
*	@param[out]	return
*	@return 	return
*/
int main(int argc, char *argv[])
{
	int		i, max;
	div_t	fizz, buzz;	// div_t構造体
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します

	for (i = 1; i <= max; i++){
		fizz = div(i, 3);
		buzz = div(i, 5);
		
		if (!fizz.rem) {
			printf("Fizz");
		}
		if (!buzz.rem) {
			printf("Buzz");
		}
		if (fizz.rem && buzz.rem) {
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");

	return 0;
}
