//
// @file		FizzBuzzTbl3.c
// @brief		テーブル参照でFizzBuzz 3
// @author		新渡戸広明
// @date		2023/12/30
// @details	
//
#include	<stdio.h>

int main(void)
{
	const short		fizz = 0x1249;	// 0b0001001001001001	fizzテーブル
	const short		buzz = 0x0421;	// 0b0000010000100001	buzzテーブル
	short			mask = 1;		// 0b0000000000000001	検査ビット
	int				i = 0;
	
	while (100 - i++) {
		if ((mask <<= 1) < 0) mask = 1;		// 左シフト MSB に到達したらローテート
		printf((fizz & mask)? "Fizz": "") |
		printf((buzz & mask)? "Buzz": "") ||
		printf("%d", i);
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
