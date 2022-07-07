/**
*	@file		FizzBuzzRC1.c
*	@brief		ロゼッタコードのFizzBuzz達１
*	@author		ロゼッタコードより
*	@date		2022/04/04
*	@details	http://rosettacode.org/wiki/FizzBuzz#C
*/

#include	<stdio.h>

int main(void)
{
	int		i = 0;
	char	B[88];
	
	while (i++ < 35)
		!sprintf(B, "%s%s", i%3 ? "": "Fizz", i%5 ? "": "Buzz")
		? sprintf(B, "%d", i): 0, printf("%s ", B);
}
