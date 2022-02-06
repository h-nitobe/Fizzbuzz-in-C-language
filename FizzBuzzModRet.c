/**
*	@file		FizzBuzzModRet.c
*	@brief		��]��FizzBuzz printf�֐���return�l�Ŕ���
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details	FizzBuzz����]�Ŕ��肷��
*			JIS X3010:2003�u7.19.6.3 printf �֐��v
*			�ԋp�l
*			printf �֐��́C�����o���ꂽ��������Ԃ��B
*			�o�̓G���[���͕\���`���G���[�����������ꍇ�C���̒l��Ԃ��B
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	max, i, count;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�FFizzBuzzMod 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		count = 0;
	
		if (!(i % 3)) {
			count = printf("Fizz");
		}
		
		if (!(i % 5)) {
			count += printf("Buzz");
		}
		if (!count) {
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
