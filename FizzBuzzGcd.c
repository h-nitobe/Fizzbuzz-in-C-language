/**
*	@file		FizzBuzzGcd.c
*	@brief		最大公約数(Greatest Common Divisor)を利用する
*	@author		新渡戸広明
*	@date		2022/02/06
*	@details	
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int gcd(int a, int b);

//                              0     1  2       3  4       5  6  7  8  9 10 11 12 13 14          15  
static const char	*str[] = { "","%d ","","Fizz ","","Buzz ","","","","","","","","","","FizzBuzz " };

int main(int argc, char *argv[])
{
	int	max, i;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1; i <= max; i++) {
		printf(str[gcd(i, 15)], i);
	}
	printf("\n");
	
	return 0;
}

/**
*	@fn			int gcd(int a, int b)
*	@brief 		与えられた2値の最大公約数を返却する
*	@param[in]	a , b
*	@param[out]	最大公約数
*	@return 	int 最大公約数
*	@details 	ユークリッドの互除法で最大公約数を求める
*				ユークリッドの互除法
*/
int gcd(int a, int b)
{
	if (b == 0) return 0;
	
	if (a % b == 0) {
		return b;
	} else {
		return gcd(b, a % b);
	}
}
