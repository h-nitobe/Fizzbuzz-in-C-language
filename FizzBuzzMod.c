/**
*	@file		FizzBuzzMod.c
*	@brief		��]��FizzBuzz
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details	FizzBuzz����]�Ŕ��肷��@�����f��
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	fizz = 0, buzz = 0;
	int	max, i;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ " 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		fizz = !(i % 3);	// �R�̔{���H
		buzz = !(i % 5);	// �T�̔{���H
	
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
