#include    <stdio.h>

int slice(char *str, int from, int to);

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
            from : �󎚊J�n�ʒu
            to   : �󎚏I���ʒu
    �߂�l�F �󎚕�����

    2025/02/15  �V�n�ˍL��
*/
int slice(char *str, int from, int to)
{
    int i, len = 0;

    for (i = from; i < to; i++) {
        putchar(str[i]);
        len++;
    }   

    return len;
}