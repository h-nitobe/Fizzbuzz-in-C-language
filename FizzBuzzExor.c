/**
*	@file		FizzBuzzExor.c
*	@brief		Exor Ç≈îªíË
*	@author		êVìnåÀçLñæ
*	@date		2022/02/11
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int		max, i;
	int		fizz = 0, buzz = 0;
	
	if (argc < 2) {		// ëÊÇQà¯êîÇ™ë∂ç›ÇµÇ»Ç¢
		printf("égópñ@ÅF" __FILE__ "\b\b 16\n");
		return -1;
	}
	max = atoi(argv[1]);	// ëÊÇQà¯êîÇêîílÇ≈äiî[Å@ëÊÇRà¯êîà»ç~ÇÕñ≥éãÇµÇ‹Ç∑
	
	for (i = 1; i <= max; i++) {
		if (!(++fizz ^ 3)) fizz = 0;
		if (!(++buzz ^ 5)) buzz = 0;

		if (!fizz) printf("Fizz");
		if (!buzz) printf("Buzz");
		if (fizz && buzz) printf("%d", i);
		printf(" ");
	}
	printf("\n");

	return 0;
}
