/**
*       @file           FizzBuzz20250215.c
*       @brief          �u�����̂���߂܂��傤�v�i��J�ĕ��j FizzBuzz
*       @author         �V�n�ˍL��
*       @date           2025/02/15
*       @details        �u�����̂���߂܂��傤�v�i��J�ĕ��j
*                       python�ɂ́u�X���C�X�v����������Ă��܂����A
*                       C����̕W�����C�u�����ɂ͓��Y�֐��͑��݂��܂���B
*                       �Ȃ���Ύ����ō��΂����̂�I�i���{�n���q�j
*                       �Ƃ����킯�œ����̂���߂Ăł����グ�Ă݂��B
*/
#include    <stdio.h>

int slice(char *str, int begin, int end);

int main(void)
{
    int     i = 0;

    while (100 - i++) { 
        slice("FizzBuzz", i%3? 4: 0, i%5? 4: 8) || printf("%d", i);
        printf(" ");
    }
    printf("\n");

    return 0;
}

/*
    siice()

    �����F   *str : ������擪�A�h���X
            begin : �󎚊J�n�ʒu
            end   : �󎚏I���ʒu
    �߂�l�F �󎚕�����

    2025/02/15  �V�n�ˍL��
*/
int slice(char *str, int begin, int end)
{
    int i, len = 0;

    for (i = begin; i < end; i++) {
        putchar(*(str + i));
        len++;
    }   

    return len;
}