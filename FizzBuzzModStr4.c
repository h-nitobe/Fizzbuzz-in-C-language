/**
*       @file           FizzBuzzModStr4.c
*       @brief          ��]��FizzBuzz ��������߂�
*       @author         �V�n�ˍL��
*       @date           2023/12/31
*       @details        sprintf() �y�߂�l�z
*                       �������@�F�@str�Ɋi�[�����������i�Ō��'\0'�͏����j
*                       ���s���@�F�@EOF
*
*                       !Fizz && !Buzz �̔�����������
*                       ���� i �������� Fizz Buzz �ŏ����Ԃ�
*/

#include	<stdio.h>

int main(void)
{
	int			ofs, i = 0;
	char		msg[32];
	
	while (100 - i++) {
		sprintf(msg, "%d", i);								// ���� i �̒l������
		ofs = (!(i % 3))? sprintf(msg, "%s", "Fizz"): 0;	// Fizz �Ȃ珑���Ԃ�
		if (!(i % 5)) sprintf(msg + ofs, "%s", "Buzz");		// Buzz �Ȃ� ofs �����ď����Ԃ�
		printf("%s ", msg);
	}
	
	return 0;
}
