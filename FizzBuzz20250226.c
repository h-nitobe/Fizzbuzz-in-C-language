/**
*       @file           FiZZBuzz20250226.c
*       @brief          FizzBuzzを書かない２ FizzBuzz
*       @author         新渡戸広明
*       @date           2025/02/26
*       @details        コマンドライン引数を講義で扱ったので使ってみる
*                       for 文の条件式の三項演算子は < より弱いので括弧が必要
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
