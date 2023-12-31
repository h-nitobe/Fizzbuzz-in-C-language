/**
*       @file           FizzBuzzModStr5.c
*       @brief          ��]��FizzBuzz ��������߂�
*       @author         �V�n�ˍL��
*       @date           2023/12/31
*       @details        
*                       !Fizz && !Buzz �̔�����������
*                       ���� i �������� Fizz Buzz �ŏ����Ԃ�
*/

#include	<stdio.h>

void bs(int n);

int main(void)
{
	int		i = 0, len;
	
	while (100 - i++) {
		len = printf("%d", i);
		if (!(i % 3)) {
			bs(len);
			printf("Fizz");
			printf(":%d", len);
			len = 0;
		}
		if (!(i % 5)) {
			bs(len);
			printf("Buzz");
		}
		printf(" ");
	}
	printf("\n");
	
	return 0;	
}

void bs(int n)
{
	int		i;
	
	for (i = 0; i < n; i++) {
		printf("\b");			// �w���o�b�N�X�y�[�X
	}
}
