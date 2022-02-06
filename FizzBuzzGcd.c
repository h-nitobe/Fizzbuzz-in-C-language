/**
*	@file		FizzBuzzGcd.c
*	@brief		�ő����(Greatest Common Divisor)�𗘗p����
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details	
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int gcd(int a, int b);

//                              0     1  2       3  4       5  6  7  8  9 10 11 12 13 14          15  
static const char	*str[] = { "","%d ","","Fizz ","","Buzz ","","","","","","","","","","FizzBuzz " };

int main(int argc, char *argv[])
{
	int	max, i;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		printf(str[gcd(i, 15)], i);
	}
	printf("\n");
	
	return 0;
}

/**
*	@fn			int gcd(int a, int b)
*	@brief 		�^����ꂽ2�l�̍ő���񐔂�ԋp����
*	@param[in]	a , b
*	@param[out]	�ő����
*	@return 	int �ő����
*	@details 	���[�N���b�h�̌ݏ��@�ōő���񐔂����߂�
*				���[�N���b�h�̌ݏ��@
*/
int gcd(int a, int b)
{
	if (b == 0) return 0;
	
	if (a % b == 0) {
		return b;
	} else {
		return gcd(b, a % b);
	}
}
