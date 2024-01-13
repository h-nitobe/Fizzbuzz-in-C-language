/**
*       @file           FizzBuzz202401.c
*       @brief          itoa() �����O�Ŏ������� FizzBuzz
*       @author         �V�n�ˍL��
*       @date           2024/01/13
*       @details        
*/
#include	<stdio.h>

char *i2a(int n);

int main(void) 
{
	int			i = 0;
	
	while (100 - i++) {
		printf("%s%s%s ", i%3? "": "Fizz", i%5? "": "Buzz", i%3&&i%5? i2a(i): "");
	}
	printf("\n");

#if 0	// i2a test
	printf("0x7fffffff: %11s\n", i2a(0x7fffffff));
	printf("0x00000001: %11s\n", i2a(0x00000001));
	printf("0x00000000: %11s\n", i2a(0));
	printf("0xffffffff: %11s\n", i2a(0xffffffff));
	printf("0x80000000: %11s\n", i2a(0x80000000));
#endif
	
	return 0;
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
