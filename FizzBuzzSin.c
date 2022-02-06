/**
*	@file		FizzBuzzSin.c
*	@brief		éOäpä÷êîÇ≈Ç≈FizzBuzz
*	@author		êVìnåÀçLñæ
*	@date		2022/02/06
*	@details	ÇªÇ±Ç‹Ç≈Ç∑ÇÈÇ©ÅH
*/
#define	_USE_MATH_DEFINES	// for M_PI

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()
#include	<math.h>	// for sin()

int main(int argc, char *argv[])
{
	int	fizz = 0, buzz = 0;
	int	max, i;
	
	if (argc < 2) {		// ëÊÇQà¯êîÇ™ë∂ç›ÇµÇ»Ç¢
		printf("égópñ@ÅFFizzBuzzMod 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ëÊÇQà¯êîÇêîílÇ≈äiî[Å@ëÊÇRà¯êîà»ç~ÇÕñ≥éãÇµÇ‹Ç∑
	
	for (i = 1; i <= max; i++) {
		fizz = !((int)(3 * sin(M_PI * i / 3)));
		buzz = !((int)(5 * sin(M_PI * i / 5)));
	
		if (fizz) {
			printf("Fizz");
		}
		
		if (buzz) {
			printf("Buzz");
		}
		if (!fizz && !buzz) {
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
