/**
*       @file           FizzBuzzModStr3.c
*       @brief          ��]��FizzBuzz ��������߂�
*       @author         �V�n�ˍL��
*       @date           2023/01/29
*       @details        sprintf() �y�߂�l�z
*                       �������@�F�@str�Ɋi�[�����������i�Ō��'\0'�͏����j
*                       ���s���@�F�@EOF
*/

#include        <stdio.h>

int main(void)
{
        int     i = 0;
        char    msg[32];        // 2^64: 20�� 32����Ώ[���ł��傤

        while (i++ < 100) {
                sprintf(msg, "%s%s", i%3? "": "Fizz", i%5? "": "Buzz")?
                                0: sprintf(msg, "%d", i), printf("%s ", msg);
        }
        printf("\n");
}
