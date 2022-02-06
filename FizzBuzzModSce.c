/**
*	@file		FizzBuzzModSce.c
*	@brief		��]��FizzBuzz�@�Z���]��(short-circuit evaluation)
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details	FizzBuzz����]�Ŕ��肷��@�Z���]���Ł@�g������_��
*			JIS X3010:2003�u6.5.13 �_��AND���Z�q�v
*			�r�b�g�P�ʂ̂Q�������Z�q�ƈقȂ�C&& ���Z�q�͍�����E�ւ̕]����ۏ؂���B
*			��P�I�y�����h�̕]���̒���𕛍�p�����_�Ƃ���B
*			��P�I�y�����h�̒l���O�Ɣ�r���ē������ꍇ�C��Q�I�y�����h�͕]�����Ȃ��B
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	fizz = 0, buzz = 0;
	int	max, i;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�FFizzBuzzMod 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		fizz = !(i % 3);	// �R�̔{���H
		buzz = !(i % 5);	// �T�̔{���H
	
		fizz && printf("Fizz");
		
		buzz && printf("Buzz");
	
		(!fizz && !buzz) && printf("%d", i);

		printf(" ");
	}
	printf("\n");
	
	return 0;
}
