/**
*	@file		FizzBuzzSw.c
*	@brief		Sitch文でFizzBuzz
*	@author		新渡戸広明
*	@date		2022/02/06
*	@details	FizzBuzzをSwitch文で判定する
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	max, i, j;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1, j = 1; i <= max; i++, j++) {
		switch (j) {
			case 3: case 6: case 9: case 12:
				printf("Fizz " );
				break;
			case 5: case 10:
				printf("Buzz ");
				break;
			case 15:
				printf("FizzBuzz ");
				j = 0;
				break;
			default:
				printf("%d ", i);
				break;
		}
	}
	printf("\n");
	
	return 0;
}
