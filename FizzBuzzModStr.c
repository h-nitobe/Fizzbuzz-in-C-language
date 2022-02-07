/**
*	@file		FizzBuzzModStr.c
*	@brief		��]��FizzBuzz ��������߂�
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()
#include	<string.h>	// for strncpy()

int main(int argc, char *argv[])
{
	int		max, i;
	int		fb;	// �ʏ�:0x0�AFizz:0x1�ABuzz:0x2�AFizzBuzz:0x3
// �߂΂�镶����        0123456789
	const char	str[] = "%dFizzBuzz";
// �J���j���O�y�[�p�[
	const char	ofs[] = { 0, 2, 6, 2 };	// �ǂݏo���I�t�Z�b�g
	const char	num[] = { 2, 4, 4, 8 };	// �ǂݏo��������
	
	char		fmt[16];				// printf �t�H�[�}�b�g
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 1; i <= max; i++) {
		fb = ((i % 3)? 0: 1) + ((i % 5)? 0: 2);
		
		strncpy(fmt, str + ofs[fb], num[fb]);
		fmt[num[fb]] = '\0';	// strncpy() �� '\0' ��t�����Ă���Ȃ�
		printf(fmt, i);
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
