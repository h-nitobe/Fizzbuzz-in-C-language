/**
*	@file		FizzBuzzModDiv.c
*	@brief		��]��FizzBuzz �W�����C�u�����𗘗p����
*	@author		�V�n�ˍL��
*	@date		2022/02/10
*	@details	% �ł�������Ȃ���
*/
#include	<stdio.h>
#include	<stdlib.h>	// for atoi(), div()

/**
*	@fn			int main(int argc, char *argv[])
*	@brief 		main �֐�
*	@param[in]	argc , argv
*	@param[out]	return
*	@return 	return
*/
int main(int argc, char *argv[])
{
	int		i, max;
	div_t	fizz, buzz;	// div_t�\����
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�

	for (i = 1; i <= max; i++){
		fizz = div(i, 3);
		buzz = div(i, 5);
		
		if (!fizz.rem) {
			printf("Fizz");
		}
		if (!buzz.rem) {
			printf("Buzz");
		}
		if (fizz.rem && buzz.rem) {
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");

	return 0;
}
