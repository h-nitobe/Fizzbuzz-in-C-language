/**
*	@file		FizzBuzzAnd.c
*	@brief		�_���ςŔ���
*	@author		�V�n�ˍL��
*	@date		2022/02/11
*	@details	���ʂ𗚂����ĂQ�̙p��Ń��E���h�A�b�v
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

		if (!((++fizz + 5) & 7)) fizz = 0;
		if (!((++buzz + 3) & 7)) buzz = 0;

		if (!fizz) printf("Fizz");
		if (!buzz) printf("Buzz");
		if (fizz && buzz) printf("%d", i);
		printf(" ");
	}
	printf("\n");

	return 0;
}
