/**
*       @file           FiZZBuzz20250405.c
*       @brief          パリティでFizzBuzz
*       @author         新渡戸広明
*       @date           2025/04/05
*       @details
*           15カウンタc　パリティ　c&5パリティ　c==0　FizzBuzz
*               1           1       
*               2           1
*               3           0       1           0   Fizz
*               4           1
*               5           0       0           0   Buzz
*               6           0       1           0   Fizz
*               7           1
*               8           1
*               9           0       1           0   Fizz
*              10           0       0           0   Buzz
*              11           1
*              12           0       1           0   Fizz
*              13           1
*              14           1
*               0           0       0           1   FizzBuzz
*
*               ＰＩＣマイコンは面白い FizzBuzz問題（独自解法） skyriverさん
*               https://piclabo.seesaa.net/article/FizzBuzzSolver.html
*/
#include    <stdio.h>

int parity4(int x);

int main(void)
{
    int     i = 0, c = 1;           // i:ループカウンタ　c:15ループカウンタ

    while (100 - i++) {
        if (parity4(c)) {           // 15ループカウンタが奇数パリティなら
            printf("%d", i);        // ループカウント表示
        } else {                    // 15ループカウンタが偶数パリティなら
            if (parity4(c & 5) || c == 0) printf("Fizz");  // 15ループカウンタ & 5 が奇数 または c が 0 なら「Fizz」表示
            if (!parity4(c & 5))          printf("Buzz");  // 15ループカウンタ & 5 が偶数 なら「Buzz」表示
        }
        c = (c == 14)? 0: c + 1;    // 15ループカウンタ リセット/インクリメント
        printf(" ");
    }
    printf("\n");
    return 0;
}

// パリティ取得　0: 偶数 1: 奇数
int parity4(int x)
{
    x &= 0xf;       // 4ビットのみ処理
    x ^= x >> 2;    
    x ^= x >> 1;
    x &= 0x1;

    return x;
}