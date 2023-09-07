///
///	@file		FizzBuzzMod24.c
///	@brief		剰余でFizzBuzz
///	@author		新渡戸広明
///	@date		2023/09/03
///	@details	FizzBuzzを剰余で判定する　へそ曲がり版
///


#include	<stdio.h>	// for printf()

int main(void)
{
	int		i = 0;
		
	while (100 - i) {
		printf(i % 3 == 2? "Fizz": "") |	// ２つのprintfの戻り値のビット論理和
		printf(i % 5 == 4? "Buzz": "") ||	// 論理和：短絡評価を期待
		printf("%d", i + 1);
		printf(" ");
		i++;
	}
	printf("\n");
	
	return 0;
}
