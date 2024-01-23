/**
*	@file		FizzBuzzDec3.c
*	@brief		�{�������l�ԗl�̗l�ɍs���i�����j
*	@author		�V�n�ˍL��
*	@date		2022/02/11 - 2024/01/23
*	@details	
*/

#include	<stdio.h>	// for printf()
#include	<string.h>	// for strlen()

enum	{ NUM, FIZZ, BUZZ, FIZZBUZZ };

int judgeFizzBuzz(int num);
char *i2a(int n);

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
*	@return 	���l�F�O�^�R�̔{���F�P�^�T�̔{���F�Q�^�P�T�̔{���F�R
*	@details 	
*/
int judgeFizzBuzz(int num)
{
	int		i, len;
	int		t = 0, ret = 0;
	char	*np;
	
	np = i2a(num);					// �\�i���\�L�ɕϊ�	
	len = strlen(np);

	t = *(np + len - 1) - '0';		// �ŉ��ʌ��𕶎����琔�l�ɕϊ�
	ret |= ((t == 0) || (t == 5)) ? 2: 0;	// �O���T�Ȃ�� or �Q: Buzz

	while (1 < len) {				// �ꌅ�ɂȂ�܂�
		t = 0;
		for (i = 0; i < len; i++) {	// �e�������Z
			t += *(np + i) - '0';
		}
		np = i2a(t);
		len = strlen(np);			// �����ɂȂ����H
	}
	if (t == 0 || t == 3 || t == 6 || t == 9) {	// %3 ���g�����畉����
		ret |= 1;					// �R�̔{���Ȃ�� or �P: Fizz
	} 

	return ret;
}

//
//	���� itoa() �֐�
//	0123456789AB 
//	-2147483648\0
//
char *i2a(int num)
{
	static char 	buff[12] = {'\0'};		// -2147483648\0 �ő�11�����{�^�[�~�l�[�^
	char			*p = &buff[11];			// �|�C���^���Ō���ɃZ�b�g
	unsigned int	numu;					// �����\���ׂ̈�unsigned��p��
	int				neg = 0;				// �����t���O
	
	if (num < 0) {							// ������������
		numu = -num;						// �@��Βl���Ƃ��đ��
		neg = 1;							// �@�����t���O�𗧂Ă�
	} else {								// ������������
		numu = num;							// �@���̂܂ܑ��
	}
	
	do {									// �O����������̂ōŒ�P��
		*--p = (char)(numu % 10 + '0');		// �@�|�C���^���f�N�������g���ĂP�̈ʂ̕������Z�b�g
		numu /= 10;							// �@�P�̈ʂ�����
	} while (numu);							// �ȏ���O�ɂȂ�܂ŌJ��Ԃ�
	
	if (neg) {								// ������������
		*--p = '-';							// �@'-'���Z�b�g
	}
	
	return p;								// ���݂̃|�C���^��ԋp
}
