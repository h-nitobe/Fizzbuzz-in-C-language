/**
*	@file		FizzBuzzTbl.c
*	@brief		�e�[�u���Q�Ƃ�FizzBuzz
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details	
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

//                          0  1  2  3  4  5  6  7  8  9 10 11 12 13 14
static const char tbl[] = {15, 0, 0, 3, 0, 5, 3, 0, 0, 3, 5, 0, 3, 0, 0};

int main(int argc, char *argv[])
{
	int		max, i;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		switch (tbl[i % 15]) {
			case 3:
				printf("Fizz " );
				break;
			case 5:
				printf("Buzz ");
				break;
			case 15:
				printf("FizzBuzz ");
				break;
			default:
				printf("%d ", i);
				break;
		}
	}
	printf("\n");
	
	return 0;
}
