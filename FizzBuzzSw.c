/**
*	@file		FizzBuzzSw.c
*	@brief		Sitch����FizzBuzz
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details	FizzBuzz��Switch���Ŕ��肷��
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	max, i, j;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1, j = 1; i <= max; i++, j++) {
		switch (j) {
			case 3: case 6: case 9: case 12:
				printf("Fizz " );
				break;
			case 5: case 10:
				printf("Buzz ");
				break;
			case 15:
				printf("FizzBuzz ");
				j = 0;
				break;
			default:
				printf("%d ", i);
				break;
		}
	}
	printf("\n");
	
	return 0;
}
