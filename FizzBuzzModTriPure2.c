/**
*	@file		FizzBuzzModTriPure.c
*	@brief		è]ÅFizzBuzz@OZq
*	@author		2022ìè@ªú±°³ñ
*	@date		2022/04/21
*	@details	OZqÅªñÎé
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	max, i;
	
	if (argc < 2) {		// æQøª¶ÝµÈ¢
		printf("gp@F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// æQøðlÅi[@æRøÈ~Í³µÜ·
	
	for (i = 1; i <= max; i++) {
		printf(i % 3 ? ((i % 5) ? "%d " : "Buzz ") : ((i % 5) ? "Fizz " : "FizzBuzz "), i);
	}
	printf("\n");
	
	return 0;
}
