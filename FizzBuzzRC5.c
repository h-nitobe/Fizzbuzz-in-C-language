/**
*	@file		FizzBuzzRC2.c
*	@brief		���[�b�^�R�[�h��FizzBuzz�B�Q
*	@author		���[�b�^�R�[�h���
*	@date		2022/04/04
*	@details	http://rosettacode.org/wiki/FizzBuzz#C
*				�ǂ݂₷���悤�ɓW�J���܂����B�V�n��
*/

#include	<stdio.h>
#include	<string.h>

int main()
{
	int		i;
	char	f[11];
	
	for (i = 1; i <= 35; i++) {
		strcpy(f, "FizzBuzz%d");
		f[(8 - (i % 5)) & 12 ] = '\0';
		printf(f + ((- i % 3) & (4 + f[8] / 8)), i);
		printf(" ");
    }
	printf("\n");
	
	return 0;
}
