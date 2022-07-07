/**
*	@file		FizzBuzzShll.c
*	@brief		���V�t�g��FizzBuzz
*	@author		�V�n�ˍL��
*	@date		2022/02/16
*	@details	
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int		fizz = 1, buzz = 1;	// �����̂P�����V�t�g���܂�
	int		max, i, count;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		fizz <<= 1;
		buzz <<= 1;
		count = 0;
									//     76543210
		if (fizz & 8) {				// 4:0b00001000 �Ń}�X�N
			count += printf("Fizz");
			fizz |= 1;				// �ʒu 0 �� 1 ���[
		}
									//      76543210
		if (buzz & 32) {			// 32:0b00100000 �Ń}�X�N
			count += printf("Buzz");
			buzz |= 1;				// �ʒu 0 �� 1 ���[
		}
		
		if (!count) {
			printf("%d", i);
		}
		
		printf(" ");
	}
	
	printf("\n");
	
	return 0;
}
