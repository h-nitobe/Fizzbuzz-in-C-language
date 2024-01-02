//
// @file		FizzBuzzCnt2.c
// @brief		カウンタでFizzBuzz 2 ダウンカウンタ
// @author		新渡戸広明
// @date		2024/01/02
// @details	
//
#include	<stdio.h>

#define		CD(t, n)	t## = ##t##? ##t## - 1: n	// Fizz = Fizz? Fizz - 1: 2
#define		FB(t)		printf(t##? "": #t)			// printf(Fizz? "": "Fizz")

int main(void)
{
	int		i = 0, Fizz = 0, Buzz = 0;
	
	while (100 - i++) {
		CD(Fizz, 2);		// CountDown 210210210...
		CD(Buzz, 4);		// CountDown 4321043210...
		
		FB(Fizz) | FB(Buzz) || printf("%d", i);
		printf(" ");
	}
	printf("\n");
	
	return 0;
}

