/**
*	@file		FizzBuzzRC3.c
*	@brief		ロゼッタコードのFizzBuzz達３
*	@author		ロゼッタコードより
*	@date		2022/04/04
*	@details	http://rosettacode.org/wiki/FizzBuzz#C
*				読みやすいように展開しました。新渡戸
*/

#include	<stdio.h>
 
int main(void)
{
	int		i;
	const char *s[] = {"%d ", "Fizz ", s[3]+4, "FizzBuzz "};	// 値が割り当てられていないローカルな変数 's' に対して参照が行われました。
	
	for (i = 1; i <= 35; i++)
		printf(s[!(i % 3) + 2 * !(i % 5)], i);
}
