///
///	@file		FizzBuzzRot.c
///	@brief		�����[�e�[�g��FizzBuzz
///	@author		�V�n�ˍL��
///	@date		2023/09/05
///	@details	r : 0000000000000001
///				�����1�r�b�g�����V�t�g���Ă䂭
///				MSB�ɓ��B�����烍�[�e�[�g�ir = 1 �ŗǂ��j
///
#include	<stdio.h>

#define	FIZZ	18724	// 0x4924 0b0100100100100100 FIZZ Mask
#define	BUZZ	16912	// 0x4210 0b0100001000010000 BUZZ Mask
#define NUMBER	13515	// 0x34CB 0b0011010011001011 NUMBER Mask
#define	ROTATE	32768	// 0x8000 0b1000000000000000 Rotate

int main(void)
{
	int		i = 0;
	int		r = 1;	// 0b0000000000000001
	
	while (100 - i++) {
		if (r & FIZZ)   printf("Fizz");
		if (r & BUZZ)   printf("Buzz");
		if (r & NUMBER) printf("%d", i);
		if ((r <<= 1) & ROTATE) r = 1;		// r >>= 15
		printf(" ");
	}
	printf("\n");
		
	return 0;
}
