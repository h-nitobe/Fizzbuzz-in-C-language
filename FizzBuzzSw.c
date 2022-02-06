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
	int	max, i;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		switch (i % 15) {
			case 0:
				printf("FizzBuzz ");
				break;
			case 3: case 6: case 9: case 12:
				printf("Fizz " );
				break;
			case 5: case 10:
				printf("Buzz ");
				break;
			default:
				printf("%d ", i);
				break;
		}
	}
	printf("\n");
	
	return 0;
}
