/**
*       @file           FizzBuzz20250215.c
*       @brief          「憧れるのをやめましょう」（大谷翔平） FizzBuzz
*       @author         新渡戸広明
*       @date           2025/02/15
*       @details        「憧れるのをやめましょう」（大谷翔平）
*                       pythonには「スライス」が実装されていますが、
*                       C言語の標準ライブラリには当該関数は存在しません。
*                       なければ自分で作ればいいのよ！（涼宮ハルヒ）
*                       というわけで憧れるのをやめてでっち上げてみた。
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

    引数：   *str : 文字列先頭アドレス
            begin : 印字開始位置
            end   : 印字終了位置
    戻り値： 印字文字数

    2025/02/15  新渡戸広明
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