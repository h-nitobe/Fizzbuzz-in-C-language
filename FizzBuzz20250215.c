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

    引数：   *str : 文字列先頭アドレス
            from : 印字開始位置
            to   : 印字終了位置
    戻り値： 印字文字数

    2025/02/15  新渡戸広明
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