/**
*	@file		FizzBuzzSin.c
*	@brief		�O�p�֐���FizzBuzz
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details	�����܂ł��邩�H
*/
#define	_USE_MATH_DEFINES	// for M_PI

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()
#include	<math.h>	// for sin()

int main(int argc, char *argv[])
{
	int	fizz = 0, buzz = 0;		// ����͔{�����ۂ��̃t���O�Ƃ��Ďg���܂�
	int	max, i;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		fizz = !(int)(2 * sin(M_PI / 3 * i));
		buzz = !(int)(2 * sin(M_PI / 5 * i));

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
