///
///	@file		FizzBuzzMod24.c
///	@brief		��]��FizzBuzz
///	@author		�V�n�ˍL��
///	@date		2023/09/03
///	@details	FizzBuzz����]�Ŕ��肷��@�ւ��Ȃ����
///


#include	<stdio.h>	// for printf()

int main(void)
{
	int		i = 0;
		
	while (100 - i) {
		printf(i % 3 == 2? "Fizz": "") |	// �Q��printf�̖߂�l�̃r�b�g�_���a
		printf(i % 5 == 4? "Buzz": "") ||	// �_���a�F�Z���]��������
		printf("%d", i + 1);
		printf(" ");
		i++;
	}
	printf("\n");
	
	return 0;
}
