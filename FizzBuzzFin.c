/**
*	@file		FizzBuzzFin.c
*	@brief		�w�܂萔����FizzBuzz
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details	�r�b�g�V�t�g�����ǂ�
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

#define		FIZZ	0x7
#define		BUZZ	0x1f

int main(int argc, char *argv[])
{
	int	fizz = FIZZ, buzz = BUZZ;	// fizz 0b0000111 buzz 0b00011111 �������E�V�t�g���܂�
	int	max, i, count = 0;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		count = 0;
		fizz >>= 1;		// 1�r�b�g�E�V�t�g
		buzz >>= 1;		// 1�r�b�g�E�V�t�g
	
		if (!fizz) {		// �V�t�g�A�E�g
			count = printf("Fizz");
			fizz = FIZZ;
		}
		
		if (!buzz) {		// �V�t�g�A�E�g
			count += printf("Buzz");
			buzz = BUZZ;
		}
		if (!count) {
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
