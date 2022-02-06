/**
*	@file		FizzBuzzMod.c
*	@brief		è—]‚ÅFizzBuzz
*	@author		V“nŒËL–¾
*	@date		2022/02/06
*	@details	FizzBuzz‚ğè—]‚Å”»’è‚·‚é@Š„‡‘f’¼
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	fizz = 0, buzz = 0;
	int	max, i;
	
	if (argc < 2) {		// ‘æ‚Qˆø”‚ª‘¶İ‚µ‚È‚¢
		printf("g—p–@F" __FILE__ " 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ‘æ‚Qˆø”‚ğ”’l‚ÅŠi”[@‘æ‚Rˆø”ˆÈ~‚Í–³‹‚µ‚Ü‚·
	
	for (i = 1; i <= max; i++) {
		fizz = !(i % 3);	// ‚R‚Ì”{”H
		buzz = !(i % 5);	// ‚T‚Ì”{”H
	
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
