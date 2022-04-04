/**
*	@file		FizzBuzzRC2.c
*	@brief		���[�b�^�R�[�h��FizzBuzz�B�Q
*	@author		���[�b�^�R�[�h���
*	@date		2022/04/04
*	@details	http://rosettacode.org/wiki/FizzBuzz#C
*				�ǂ݂₷���悤�ɓW�J���܂����B�V�n��
*/

#include	<stdio.h>
 
int main(void)
{
	int		i;
	
	for (i = 1; i <= 35; i++) {
		if (i % 3 && i % 5) {
			printf("%d ", i);
		} else {
			printf("%s%s ", i % 3 ? "": "Fizz", i % 5 ? "": "Buzz");
		}
	}
}


