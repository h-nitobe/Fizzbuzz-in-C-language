/**
*	@file		FizzBuzzRC3.c
*	@brief		���[�b�^�R�[�h��FizzBuzz�B�R
*	@author		���[�b�^�R�[�h���
*	@date		2022/04/04
*	@details	http://rosettacode.org/wiki/FizzBuzz#C
*				�ǂ݂₷���悤�ɓW�J���܂����B�V�n��
*/

#include	<stdio.h>
 
int main(void)
{
	int		i;
	const char *s[] = {"%d ", "Fizz ", s[3]+4, "FizzBuzz "};	// �l�����蓖�Ă��Ă��Ȃ����[�J���ȕϐ� 's' �ɑ΂��ĎQ�Ƃ��s���܂����B
	
	for (i = 1; i <= 35; i++)
		printf(s[!(i % 3) + 2 * !(i % 5)], i);
}
