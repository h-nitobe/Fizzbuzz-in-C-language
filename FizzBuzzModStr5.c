/**
*       @file           FizzBuzzModStr5.c
*       @brief          剰余でFizzBuzz 文字列を玩ぶ
*       @author         新渡戸広明
*       @date           2023/12/31
*       @details        
*                       !Fizz && !Buzz の判定を放棄する
*                       毎回 i を書いて Fizz Buzz で書きつぶす
*/

#include	<stdio.h>

void bs(int n);

int main(void)
{
	int		i = 0, len;
	
	while (100 - i++) {
		len = printf("%d", i);
		if (!(i % 3)) {
			bs(len);
			printf("Fizz");
			printf(":%d", len);
			len = 0;
		}
		if (!(i % 5)) {
			bs(len);
			printf("Buzz");
		}
		printf(" ");
	}
	printf("\n");
	
	return 0;	
}

void bs(int n)
{
	int		i;
	
	for (i = 0; i < n; i++) {
		printf("\b");			// 指定回バックスペース
	}
}
