/**
*	@file		FizzBuzzCnt.c
*	@brief		�J�E���^��FizzBuzz
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details	FizzBuzz���J�E���^�Ŕ��肷��
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	fizz = 0, buzz = 0;
	int	max, i;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�FFizzBuzzMod 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		fizz++;
		buzz++;
	
		if (3 <= fizz) {
			printf("Fizz");
			fizz = 0;
		}
		
		if (5 <= buzz) {
			printf("Buzz");
			buzz = 0;
		}
		if (fizz && buzz) {
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	
	return 0;
}