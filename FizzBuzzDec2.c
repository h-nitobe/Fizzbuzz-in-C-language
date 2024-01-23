/**
*	@file		FizzBuzzDec2.c
*	@brief		�{�������l�ԗl�̗l�ɍs���i���j
*	@author		�V�n�ˍL��
*	@date		2022/02/11 - 2024/01/22
*	@details	
*/

#include	<stdio.h>	// for printf()
#include	<string.h>	// for strlen()

enum	{ NUM, FIZZ, BUZZ, FIZZBUZZ };

int judgeFizzBuzz(int num);

int main(void)
{
	int		i;
		
	for (i = 1; i <= 100; i++) {
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
	int		i, len;
	int		t = 0, ret = 0;
	char	decNum[12] = { 0 };		// �\�i�\�L 0x80000000 = -2147483648 �����{10���{\0
	
	sprintf(decNum, "%d", num);		// �\�i���\�L�ɕϊ�	
	len = strlen(decNum);

	t = decNum[len - 1] - '0';		// �ŉ��ʌ��𕶎����琔�l�ɕϊ�
	ret |= ((t == 0) || (t == 5)) ? 2: 0;	// �O���T�Ȃ�� or �Q

	while (1 < len) {				// �ꌅ�ɂȂ�܂�
		t = 0;
		for (i = 0; i < len; i++) {	// �e�������Z
			t += decNum[i] - '0';
		}
		sprintf(decNum, "%d", t);
		len = strlen(decNum);		// �����ɂȂ����H
	}
	if (t == 0 || t == 3 || t == 6 || t == 9) {	// %3 ���g�����畉����
		ret |= 1;
	} 

	return ret;
}
