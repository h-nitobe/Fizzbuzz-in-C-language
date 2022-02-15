/**
*	@file		FizzBuzzDec.c
*	@brief		�{�������l�ԗl�̗l�ɍs��
*	@author		�V�n�ˍL��
*	@date		2022/02/11
*	@details	
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()
#include	<string.h>	// for strlen()

enum	{ NUM, FIZZ, BUZZ, FIZZBUZZ };

int judgeFizzBuzz(int num);

int main(int argc, char *argv[])
{
	int		max, i;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		switch(judgeFizzBuzz(i)) {
			case NUM:
				printf("%d ", i);
				break;
			case FIZZ:
				printf("Fizz ");
				break;
			case BUZZ:
				printf("Buzz ");
				break;
			case FIZZBUZZ:
				printf("FizzBuzz ");
				break;
		}
	}
	printf("\n");
	
	return 0;
}

/**
*	@fn			int judgeFizzBuzz(int num)
*	@brief 		FizzBuzz ����
*	@param[in]	int num
*	@return 	���l�F�O�@�R�̔{���F�P�@�T�̔{���F�Q�@�P�T�̔{���F�R
*	@details 	
*/
int judgeFizzBuzz(int num)
{
	size_t	i;
	int		t = 0, ret = 0;
	char	decNum[12] = { 0 };		// �\�i�\�L 0x80000000 = -2147483648 �����{10���{\0
	
	sprintf(decNum, "%d", num);		// �\�i���\�L�ɕϊ�
	
	for (i = 0; i < strlen(decNum); i++) {	// �e���̑��a���R�̔{���Ȃ�
		t += decNum[i] - '0';		// �����𐔒l�ɕϊ�
	}
	ret += ((t % 3) == 0) ? 1: 0;	// ���a���R�̔{���Ȃ�΁{�P�E�E�E��]�g���Ƃ��Ȃ�����
	
	t = decNum[strlen(decNum) - 1] - '0';	// �ŉ��ʌ��𕶎����琔�l�ɕϊ�
	ret += ((t == 0) || (t == 5)) ? 2: 0;	// �O���T�Ȃ�΁{�Q
	
	return ret;
}
