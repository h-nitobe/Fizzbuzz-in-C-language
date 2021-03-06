/**
*	@file		FizzBuzzDec.c
*	@brief		倍数判定を人間様の様に行う
*	@author		新渡戸広明
*	@date		2022/02/11
*	@details	
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()
#include	<string.h>	// for strlen()

enum	{ NUM, FIZZ, BUZZ, FIZZBUZZ };

int judgeFizzBuzz(int num);

int main(int argc, char *argv[])
{
	int		max, i;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1; i <= max; i++) {
		switch(judgeFizzBuzz(i)) {
			case NUM:
				printf("%d ", i);
				break;
			case FIZZ:
				printf("Fizz ");
				break;
			case BUZZ:
				printf("Buzz ");
				break;
			case FIZZBUZZ:
				printf("FizzBuzz ");
				break;
		}
	}
	printf("\n");
	
	return 0;
}

/**
*	@fn			int judgeFizzBuzz(int num)
*	@brief 		FizzBuzz 判定
*	@param[in]	int num
*	@return 	数値：０　３の倍数：１　５の倍数：２　１５の倍数：３
*	@details 	
*/
int judgeFizzBuzz(int num)
{
	size_t	i;
	int		t = 0, ret = 0;
	char	decNum[12] = { 0 };		// 十進表記 0x80000000 = -2147483648 符号＋10桁＋\0
	
	sprintf(decNum, "%d", num);		// 十進数表記に変換
	
	for (i = 0; i < strlen(decNum); i++) {	// 各桁の総和が３の倍数なら
		t += decNum[i] - '0';		// 文字を数値に変換
	}
	ret += ((t % 3) == 0) ? 1: 0;	// 総和が３の倍数ならば＋１・・・剰余使っとるやないかい
	
	t = decNum[strlen(decNum) - 1] - '0';	// 最下位桁を文字から数値に変換
	ret += ((t == 0) || (t == 5)) ? 2: 0;	// ０か５ならば＋２
	
	return ret;
}
