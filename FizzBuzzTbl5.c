/**
*       @file           FizzBuzzTbl5.c
*       @brief          テーブル参照で FizzBuzz
*       @author         新渡戸広明
*       @date           2025/01/21
*       @details        
*/
#include	<stdio.h>

int		mod[] = {3, 0, 0, 1, 0, 2, 1, 0, 0, 1, 2, 0, 1, 0, 0};
char	*str[] = {"", "Fizz", "Buzz", "FizzBuzz"};

int main(void)
{
	int		i;
	
	for (i = 1; i <= 100; i++) {
		printf("%s", str[mod[i%15]]) || printf("%d", i);
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
