/**
*       @file           FizzBuzzModStr2.c
*       @brief          è—]‚ÅFizzBuzz •¶š—ñ‚ğŠß‚Ô
*       @author         V“nŒËL–¾
*       @date           2023/01/28
*       @details
*/

#include        <stdio.h>
#include        <string.h>

int main(void)
{
        int     i;
        char    msg[10];

        for (i = 1; i <= 100; i++) {
                strcpy(msg, i%3? "": "Fizz");
                strcat(msg, i%5? "": "Buzz");
                printf(strlen(msg)? msg: "%d", i);
                printf(" ");
        }
        printf("\n");
}
