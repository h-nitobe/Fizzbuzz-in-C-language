/**
*       @file           FiZZBuzz20250226.c
*       @brief          FizzBuzz�������Ȃ��Q FizzBuzz
*       @author         �V�n�ˍL��
*       @date           2025/02/26
*       @details        �R�}���h���C���������u�`�ň������̂Ŏg���Ă݂�
*                       for ���̏������̎O�����Z�q�� < ���ア�̂Ŋ��ʂ��K�v
*/
#include    <stdio.h>

int main(int argc, char *argv[])
{
    int     i = 0, j, k;

    while (100 - i++) {
        for (j = 0, k = i%3? 4: 0; k < (i%5? 4: 8); k++) {
            j += putchar(argv[0][k]);
        }
        if (!j) {
            printf("%d", i);
        }
        putchar(' ');
    }
    putchar('\n');
    return 0;
}
