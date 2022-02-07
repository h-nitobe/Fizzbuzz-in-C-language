/**
*	@file		FizzBuzzFnc.c
*	@brief		�֐��|�C���^�z���FizzBuzz
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details	
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

void n(int num);
void f(int num);
void b(int num);
void fb(int num);
//                                           0  1  2  3  4  5  6  7  8  9 10 11 12 13 14
static const void (*fizzbuzz[])(int num) = {fb, n, n, f, n, b, f, n, n, f, b, n, f, n, n};

int main(int argc, char *argv[])
{
	int	max, i, j;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1, j = 1; i <= max; i++, j++) {
		if (15 <= j) j = 0;
		fizzbuzz[j](i);
	}
	printf("\n");
	
	return 0;
}

void n(int num)
{
	printf("%d ", num);
}

void f(int num)
{
	printf("Fizz ");
}

void b(int num)
{
	printf("Buzz ");
}

void fb(int num)
{
	printf("FizzBuzz ");
}


