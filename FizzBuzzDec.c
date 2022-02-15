/**
*	@file		FizzBuzzDec.c
*	@brief		”{””»’è‚ğlŠÔ—l‚Ì—l‚És‚¤
*	@author		V“nŒËL–¾
*	@date		2022/02/11
*	@details	
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()
#include	<string.h>	// for strlen()

enum	{ NUM, FIZZ, BUZZ, FIZZBUZZ };

int judgeFizzBuzz(int num);

int main(int argc, char *argv[])
{
	int		max, i;
	
	if (argc < 2) {		// ‘æ‚Qˆø”‚ª‘¶İ‚µ‚È‚¢
		printf("g—p–@F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ‘æ‚Qˆø”‚ğ”’l‚ÅŠi”[@‘æ‚Rˆø”ˆÈ~‚Í–³‹‚µ‚Ü‚·
	
	for (i = 1; i <= max; i++) {
		switch(judgeFizzBuzz(i)) {
			case NUM:
				printf("%d ", i);
				break;
			case FIZZ:
				printf("Fizz ");
				break;
			case BUZZ:
				printf("Buzz ");
				break;
			case FIZZBUZZ:
				printf("FizzBuzz ");
				break;
		}
	}
	printf("\n");
	
	return 0;
}

/**
*	@fn			int judgeFizzBuzz(int num)
*	@brief 		FizzBuzz ”»’è
*	@param[in]	int num
*	@return 	”’lF‚O@‚R‚Ì”{”F‚P@‚T‚Ì”{”F‚Q@‚P‚T‚Ì”{”F‚R
*	@details 	
*/
int judgeFizzBuzz(int num)
{
	size_t	i;
	int		t = 0, ret = 0;
	char	decNum[12] = { 0 };		// \i•\‹L 0x80000000 = -2147483648 •„†{10Œ…{\0
	
	sprintf(decNum, "%d", num);		// \i”•\‹L‚É•ÏŠ·
	
	for (i = 0; i < strlen(decNum); i++) {	// ŠeŒ…‚Ì‘˜a‚ª‚R‚Ì”{”‚È‚ç
		t += decNum[i] - '0';		// •¶š‚ğ”’l‚É•ÏŠ·
	}
	ret += ((t % 3) == 0) ? 1: 0;	// ‘˜a‚ª‚R‚Ì”{”‚È‚ç‚Î{‚PEEEè—]g‚Á‚Æ‚é‚â‚È‚¢‚©‚¢
	
	t = decNum[strlen(decNum) - 1] - '0';	// Å‰ºˆÊŒ…‚ğ•¶š‚©‚ç”’l‚É•ÏŠ·
	ret += ((t == 0) || (t == 5)) ? 2: 0;	// ‚O‚©‚T‚È‚ç‚Î{‚Q
	
	return ret;
}
