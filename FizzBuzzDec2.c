/**
*	@file		FizzBuzzDec2.c
*	@brief		倍数判定を人間様の様に行う（改）
*	@author		新渡戸広明
*	@date		2022/02/11 - 2024/01/22
*	@details	
*/

#include	<stdio.h>	// for printf()
#include	<string.h>	// for strlen()

enum	{ NUM, FIZZ, BUZZ, FIZZBUZZ };

int judgeFizzBuzz(int num);

int main(void)
{
	int		i;
		
	for (i = 1; i <= 100; i++) {
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
	int		i, len;
	int		t = 0, ret = 0;
	char	decNum[12] = { 0 };		// 十進表記 0x80000000 = -2147483648 符号＋10桁＋\0
	
	sprintf(decNum, "%d", num);		// 十進数表記に変換	
	len = strlen(decNum);

	t = decNum[len - 1] - '0';		// 最下位桁を文字から数値に変換
	ret |= ((t == 0) || (t == 5)) ? 2: 0;	// ０か５ならば or ２

	while (1 < len) {				// 一桁になるまで
		t = 0;
		for (i = 0; i < len; i++) {	// 各桁を加算
			t += decNum[i] - '0';
		}
		sprintf(decNum, "%d", t);
		len = strlen(decNum);		// 何桁になった？
	}
	if (t == 0 || t == 3 || t == 6 || t == 9) {	// %3 を使ったら負けだ
		ret |= 1;
	} 

	return ret;
}
