/**
*	@file		FizzBuzzRC4.c
*	@brief		ロゼッタコードのFizzBuzz達４
*	@author		新渡戸広明
*	@date		2022/04/04
*	@details	http://rosettacode.org/wiki/FizzBuzz#C
*				読みやすいように展開しました。新渡戸
*/

#include	<stdio.h>

#define	F(x, y)	printf("%s", i % x ? "": #y "zz")

int main(int i){
	for (; i <= 35 ; i++) {
		F(3, Fi) | F(5, Bu) || printf("%d", i);
		printf(" ");
	}
	return 0;
}
