/**
*	@file		FizzBuzzOfs.c
*	@brief		�I�t�Z�b�g��FizzBuzz
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details	�I�t�Z�b�g�������܂�
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	fizz = 0, buzz = 0;	// ����̓I�t�Z�b�g�Ƃ��Ďg���܂�
	int	max, i, count;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		count = 0;
		
		if (3 <= (i - fizz)) {
			count = printf("Fizz");
			fizz += 3;	// Fizz �I�t�Z�b�g���R���₵�܂�
		}
		
		if (5 <= (i - buzz)) {
			count += printf("Buzz");
			buzz += 5;	// Buzz �I�t�Z�b�g���T���₵�܂�
		}
		if (!count) {		// ���������o���Ă��Ȃ����
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
