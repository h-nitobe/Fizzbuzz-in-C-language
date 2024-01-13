/**
*       @file           FizzBuzz202401.c
*       @brief          itoa() を自前で実装して FizzBuzz
*       @author         新渡戸広明
*       @date           2024/01/13
*       @details        
*/
#include	<stdio.h>

char *i2a(int n);

int main(void) 
{
	int			i = 0;
	
	while (100 - i++) {
		printf("%s%s%s ", i%3? "": "Fizz", i%5? "": "Buzz", i%3&&i%5? i2a(i): "");
	}
	printf("\n");

#if 0	// i2a test
	printf("0x7fffffff: %11s\n", i2a(0x7fffffff));
	printf("0x00000001: %11s\n", i2a(0x00000001));
	printf("0x00000000: %11s\n", i2a(0));
	printf("0xffffffff: %11s\n", i2a(0xffffffff));
	printf("0x80000000: %11s\n", i2a(0x80000000));
#endif
	
	return 0;
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
