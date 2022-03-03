#include <stdio.h>

int main()
{
	int     i;

	printf("* FizzBuzz on BGB * ");
	printf("------------------- ");
	printf("                    ");
	
	for (i = 1; i <= 64; i++) {
		if (!(i % 3)) printf("Fizz");
		if (!(i % 5)) printf("Buzz");
		if (i % 3 && i % 5) printf("%d", i);
		 printf(" ");
	}

	return 0;
}
