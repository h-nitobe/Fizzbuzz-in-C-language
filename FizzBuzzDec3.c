/**
*	@file		FizzBuzzDec3.c
*	@brief		倍数判定を人間様の様に行う（改改）
*	@author		新渡戸広明
*	@date		2022/02/11 - 2024/01/23
*	@details	
*/

#include	<stdio.h>	// for printf()
#include	<string.h>	// for strlen()

enum	{ NUM, FIZZ, BUZZ, FIZZBUZZ };

int judgeFizzBuzz(int num);
char *i2a(int n);

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
*	@return 	数値：０／３の倍数：１／５の倍数：２／１５の倍数：３
*	@details 	
*/
int judgeFizzBuzz(int num)
{
	int		i, len;
	int		t = 0, ret = 0;
	char	*np;
	
	np = i2a(num);					// 十進数表記に変換	
	len = strlen(np);

	t = *(np + len - 1) - '0';		// 最下位桁を文字から数値に変換
	ret |= ((t == 0) || (t == 5)) ? 2: 0;	// ０か５ならば or ２: Buzz

	while (1 < len) {				// 一桁になるまで
		t = 0;
		for (i = 0; i < len; i++) {	// 各桁を加算
			t += *(np + i) - '0';
		}
		np = i2a(t);
		len = strlen(np);			// 何桁になった？
	}
	if (t == 0 || t == 3 || t == 6 || t == 9) {	// %3 を使ったら負けだ
		ret |= 1;					// ３の倍数ならば or １: Fizz
	} 

	return ret;
}

//
//	私製 itoa() 関数
//	0123456789AB 
//	-2147483648\0
//
char *i2a(int num)
{
	static char 	buff[12] = {'\0'};		// -2147483648\0 最大11文字＋ターミネータ
	char			*p = &buff[11];			// ポインタを最後尾にセット
	unsigned int	numu;					// 負数表示の為にunsignedを用意
	int				neg = 0;				// 負数フラグ
	
	if (num < 0) {							// 負数だったら
		numu = -num;						// 　絶対値をとって代入
		neg = 1;							// 　負数フラグを立てる
	} else {								// 正数だったら
		numu = num;							// 　そのまま代入
	}
	
	do {									// ０も処理するので最低１回
		*--p = (char)(numu % 10 + '0');		// 　ポインタをデクリメントして１の位の文字をセット
		numu /= 10;							// 　１の位を除去
	} while (numu);							// 以上を０になるまで繰り返す
	
	if (neg) {								// 負数だったら
		*--p = '-';							// 　'-'をセット
	}
	
	return p;								// 現在のポインタを返却
}
