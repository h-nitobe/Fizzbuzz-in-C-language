//
//		ex3_001_n1.c
//
//		FizzBuzz別解
//			そこそこまっとう版
//				2021/04/17 Written by H.Nitobe
//

#include <stdio.h>		// for printf(), scanf()

int main(int argc, char *argv[])
{
	int		num, i, len;

	printf("数値を入力してください＝＞ ");
	scanf("%d", &num);
	
	for (i = 1; i <= num; i++) {
		len = 0;
		if (!(i % 3)) {
			len = printf("Fizz");
		}
		if (!(i % 5)) {
			len = printf("Buzz");
		}
		if (!len) {
			printf ("%d", i);
		}
		printf(" ");
	}

	printf("\n");

	return 0;
}
