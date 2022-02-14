/**
*	@file		FizzBuzzArr.c
*	@brief		循環配列でFizzBuzz
*	@author		新渡戸広明
*	@date		2022/02/12
*	@details	循環リスト版を実装しようとしたが、配列でいいんじゃねぇ？
*				カウンタの変種ともいえる。
*				循環リスト版は面倒なので止めた。
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

// カンニングペーパ
const char	Fizz[] = { 1, 2, 0 };			// 次の添え字
const char	Buzz[] = { 1, 2, 3, 4, 0 };

int main(int argc, char *argv[])
{
	int	fizz = 0, buzz = 0;
	int	max, i;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1; i <= max; i++) {
		fizz = Fizz[fizz];
		buzz = Buzz[buzz];
		
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
