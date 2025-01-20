/**
*       @file           FizzBuzz20250119.c
*       @brief          文字列配列と添え字を駆使して FizzBuzz
*       @author         新渡戸広明
*       @date           2025/01/19
*       @details        
*/
#include	<stdio.h>

int rep(char *s, int n);

int main(void)
{
	int		i;
	
	i = 0;
	while (100 - i++) {
		printf("%s%s", &"Fizz"[!!(i%3)*4], &"Buzz"[!!(i%5)*4]) || printf("%d", i);
		printf(" ");
	}
	printf("\n");
	
	i = 0;
	while (100 - i++) {
		printf("%s%s", &(!!(i%3)*4)["Fizz"], &(!!(i%5)*4)["Buzz"]) || printf("%d", i);
		printf(" ");
	}
	printf("\n");

	i = 0;
	while (100 - i++) {
		printf("%s%s", "Fizz"+!!(i%3)*4, "Buzz"+!!(i%5)*4) || printf("%d", i);
		printf(" ");
	}
	printf("\n");
		
	return 0;
}
