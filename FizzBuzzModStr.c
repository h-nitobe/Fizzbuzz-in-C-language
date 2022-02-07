/**
*	@file		FizzBuzzModStr.c
*	@brief		剰余でFizzBuzz 文字列を玩ぶ
*	@author		新渡戸広明
*	@date		2022/02/06
*	@details
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()
#include	<string.h>	// for strncpy()

int main(int argc, char *argv[])
{
	int		max, i;
	int		fb;	// 通常:0x0、Fizz:0x1、Buzz:0x2、FizzBuzz:0x3
// 玩ばれる文字列        0123456789
	const char	str[] = "%dFizzBuzz";
// カンニングペーパー
	const char	ofs[] = { 0, 2, 6, 2 };	// 読み出しオフセット
	const char	num[] = { 2, 4, 4, 8 };	// 読み出し文字数
	
	char		fmt[16];				// printf フォーマット
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1; i <= max; i++) {
		fb = ((i % 3)? 0: 1) + ((i % 5)? 0: 2);
		
		strncpy(fmt, str + ofs[fb], num[fb]);
		fmt[num[fb]] = '\0';	// strncpy() は '\0' を付加してくれない
		printf(fmt, i);
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
