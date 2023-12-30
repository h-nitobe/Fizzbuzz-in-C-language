//
// @file		FizzBuzzCnt2.c
// @brief		カウンタでFizzBuzz 2
// @author		新渡戸広明
// @date		2023/12/30
// @details	
//
#include	<stdio.h>

int main(void)
{
	int		fizz = 0, buzz = 0;
	int		i = 0;
	
	while (100 - i++) {
		if (3 <= ++fizz) fizz = 0;
		if (5 <= ++buzz) buzz = 0;
		printf(!fizz? "Fizz": "") |
		printf(!buzz? "Buzz": "") ||
		printf("%d", i);
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
