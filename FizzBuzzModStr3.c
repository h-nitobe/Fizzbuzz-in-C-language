/**
*       @file           FizzBuzzModStr3.c
*       @brief          剰余でFizzBuzz 文字列を玩ぶ
*       @author         新渡戸広明
*       @date           2023/01/29
*       @details        sprintf() 【戻り値】
*                       成功時　：　strに格納した文字数（最後の'\0'は除く）
*                       失敗時　：　EOF
*/

#include        <stdio.h>

int main(void)
{
        int     i = 0;
        char    msg[32];        // 2^64: 20桁 32あれば充分でしょう

        while (i++ < 100) {
                sprintf(msg, "%s%s", i%3? "": "Fizz", i%5? "": "Buzz")?
                                0: sprintf(msg, "%d", i), printf("%s ", msg);
        }
        printf("\n");
}
