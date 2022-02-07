/**
*	@file		FizzBuzzModTri.c
*	@brief		��]��FizzBuzz�@�O�����Z�q
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details	�O�����Z�q�ł���΂�
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	max, i;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		printf(!(i % 3) ? "Fizz" : "");
		printf(!(i % 5) ? "Buzz" : (i % 3) ? "%d" : "", i);
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
