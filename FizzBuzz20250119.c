/**
*       @file           FizzBuzz20250119.c
*       @brief          文字列配列と添え字を駆使して FizzBuzz
*       @author         新渡戸広明
*       @date           2025/01/19
*       @details        おまけ：ポインタ版
*/
#include	<stdio.h>

int main(void)
{
	int		i;
	
	// 文字配列と添え字
	i = 0;
	while (100 - i++) {
		printf("%s%s", &"Fizz"[!!(i%3)*4], &"Buzz"[!!(i%5)*4]) || printf("%d", i);
		printf(" ");
	}
	printf("\n");
	
	// str[4] <-等価-> 4[str] 使わないほうが身のため
	i = 0;
	while (100 - i++) {
		printf("%s%s", &(!!(i%3)*4)["Fizz"], &(!!(i%5)*4)["Buzz"]) || printf("%d", i);
		printf(" ");
	}
	printf("\n");

	// ポインタで実装　これがエレガントだな
	i = 0;
	while (100 - i++) {
		printf("%s%s", "Fizz"+!!(i%3)*4, "Buzz"+!!(i%5)*4) || printf("%d", i);
		printf(" ");
	}
	printf("\n");
		
	return 0;
}
