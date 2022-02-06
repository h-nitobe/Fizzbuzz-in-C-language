/**
*	@file		FizzBuzzModBuf.c
*	@brief		��]��FizzBuzz �o�b�t�@�����
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details	FizzBuzz����]�Ŕ��肷��@������֐�����g
*/

#include	<stdio.h>	// for printf(), sprintf()
#include	<stdlib.h>	// for atoi()
#include	<string.h>	// for strcpy(), strcat(), strlen()

int main(int argc, char *argv[])
{
	int	max, i;
	char	buff[16];
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�FFizzBuzzMod 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		strcpy(buff, "");		// �o�b�t�@�N���A
	
		if (!(i % 3)) {
			strcpy(buff, "Fizz");	// "Fizz"���㏑��
		}
		
		if (!(i % 5)) {
			strcat(buff, "Buzz");	// "Buzz"��ǋL
		}
		if (!strlen(buff)) {		// �o�b�t�@���󂾂�����
			sprintf(buff, "%d", i);	// ����������
		}
		printf("%s ", buff);
	}
	printf("\n");
	
	return 0;
}
