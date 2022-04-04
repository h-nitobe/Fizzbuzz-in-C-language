/**
*	@file		FizzBuzzRC2.c
*	@brief		ロゼッタコードのFizzBuzz達２
*	@author		ロゼッタコードより
*	@date		2022/04/04
*	@details	http://rosettacode.org/wiki/FizzBuzz#C
*				読みやすいように展開しました。新渡戸
*/

#include	<stdio.h>
 
int main(void)
{
	int		i;
	
	for (i = 1; i <= 35; i++) {
		if (i % 3 && i % 5) {
			printf("%d ", i);
		} else {
			printf("%s%s ", i % 3 ? "": "Fizz", i % 5 ? "": "Buzz");
		}
	}
}


