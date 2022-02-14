/**
*	@file		FizzBuzzArr.c
*	@brief		�z�z���FizzBuzz
*	@author		�V�n�ˍL��
*	@date		2022/02/12
*	@details	�z���X�g�ł��������悤�Ƃ������A�z��ł����񂶂�˂��H
*				�J�E���^�̕ώ�Ƃ�������B
*				�z���X�g�ł͖ʓ|�Ȃ̂Ŏ~�߂��B
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

// �J���j���O�y�[�p
const char	Fizz[] = { 1, 2, 0 };			// ���̓Y����
const char	Buzz[] = { 1, 2, 3, 4, 0 };

int main(int argc, char *argv[])
{
	int	fizz = 0, buzz = 0;
	int	max, i;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		fizz = Fizz[fizz];
		buzz = Buzz[buzz];
		
		if (!fizz) {
			printf("Fizz");
		}
		
		if (!buzz) {
			printf("Buzz");
		}
		
		if (fizz && buzz) {
			printf("%d", i);
		}
		
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
