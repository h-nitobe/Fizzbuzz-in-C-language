///
///	@file		FizzBuzzModFlag.c
///	@brief		剰余でFizzBuzz
///	@author		新渡戸広明
///	@date		2023/01/30
///	@details	FizzBuzzを剰余で判定する　フラグ使用
///

#include	<stdio.h>	// for printf()

int main(void)
{
	int	flag = 0;
	int	i;
	
	for (i = 1; i <= 100; i++) {
		flag = (i % 3 == 0) | (i % 5 == 0) << 1;

		if (flag == 0) {
			printf("%d", i);
		} else {
			if (flag & 1) printf("Fizz");
			if (flag & 2) printf("Buzz");
		}
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
