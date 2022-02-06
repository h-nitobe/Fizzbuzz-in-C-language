/**
*	@file		FizzBuzzModRec.c
*	@brief		�ċA�Ăяo����FizzBuzz
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details	
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

void fizzbuzz(int num);

int main(int argc, char *argv[])
{
	int	max;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	fizzbuzz(max);
	
	return 0;
}

void fizzbuzz(int num)
{
	int	count = 0;
	
	if (num) {
		fizzbuzz(num - 1);	// �ċA�Ăяo��
		
		if (!(num % 3)) {
			count = printf("Fizz");
		}
		if (!(num % 5)) {
			count += printf("Buzz");
		}
		if (!count) {
			printf("%d", num);
		}
		printf(" ");
	} else {
		printf("\n");
	}
		
}
