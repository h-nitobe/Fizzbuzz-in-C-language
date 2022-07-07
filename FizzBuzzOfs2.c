/**
*	@file		FizzBuzzOfs2.c
*	@brief		�ڕW�l�I�t�Z�b�g��FizzBuzz
*	@author		�V�n�ˍL��
*	@date		2022/02/13
*	@details	�ڕW�l�I�t�Z�b�g�Ɣ�r���܂�
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	nextFizz = 3, nextBuzz = 5;	// ����͖ڕW�l�I�t�Z�b�g�Ƃ��Ďg���܂�
	int	max, i, count;
	
	if (argc < 2) {					// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	max = atoi(argv[1]);			// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		count = 0;
		
		if (nextFizz <= i) {		// < �͂��蓾�Ȃ����� == �ł������񂾂��ǂˁB�O�̂��߁B
			count = printf("Fizz");
			nextFizz += 3;			// Fizz �ڕW�l�I�t�Z�b�g���R���₵�܂�
		}
		
		if (nextBuzz <= i) {		// < �͂��蓾�Ȃ����� == �ł������񂾂��ǂˁB�O�̂��߁B
			count += printf("Buzz");
			nextBuzz += 5;			// Buzz �ڕW�l�I�t�Z�b�g���T���₵�܂�
		}
		if (!count) {				// ���������o���Ă��Ȃ����
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
