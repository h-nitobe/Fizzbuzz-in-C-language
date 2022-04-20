/**
*	@file		FizzBuzzModTriPure.c
*	@brief		��]��FizzBuzz�@�O�����Z�q
*	@author		2022����u�ҁ^�V�n�ˍL����
*	@date		2022/04/21
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
		printf(i % 15 ? (i % 3 ? (i % 5 ? "%d ": "Buzz ") : "Fizz ") : "FizzBuzz ", i);
	}
	printf("\n");
	
	return 0;
}
