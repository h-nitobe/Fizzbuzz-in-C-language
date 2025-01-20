/**
*       @file           FizzBuzz20250119.c
*       @brief          ������z��ƓY��������g���� FizzBuzz
*       @author         �V�n�ˍL��
*       @date           2025/01/19
*       @details        ���܂��F�|�C���^��
*/
#include	<stdio.h>

int main(void)
{
	int		i;
	
	// �����z��ƓY����
	i = 0;
	while (100 - i++) {
		printf("%s%s", &"Fizz"[!!(i%3)*4], &"Buzz"[!!(i%5)*4]) || printf("%d", i);
		printf(" ");
	}
	printf("\n");
	
	// str[4] <-����-> 4[str] �g��Ȃ��ق����g�̂���
	i = 0;
	while (100 - i++) {
		printf("%s%s", &(!!(i%3)*4)["Fizz"], &(!!(i%5)*4)["Buzz"]) || printf("%d", i);
		printf(" ");
	}
	printf("\n");

	// �|�C���^�Ŏ����@���ꂪ�G���K���g����
	i = 0;
	while (100 - i++) {
		printf("%s%s", "Fizz"+!!(i%3)*4, "Buzz"+!!(i%5)*4) || printf("%d", i);
		printf(" ");
	}
	printf("\n");
		
	return 0;
}
