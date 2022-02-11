/**
*	@file		FizzBuzzExor.c
*	@brief		�r���I�_���a(Exor) �Ŕ���
*	@author		�V�n�ˍL��
*	@date		2022/02/11
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int		max, i;
	int		fizz = 0, buzz = 0;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
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
