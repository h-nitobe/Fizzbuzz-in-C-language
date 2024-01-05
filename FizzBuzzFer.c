/**
*       @file           FizzBuzzModStr5.c
*       @brief          �t�F���}�[�̏��藝��FizzBuzz
*       @author         �V�n�ˍL��
*       @date           2024/01/05
*       @details        
*                       �t�F���}�[�̏��藝�@Wiki
*                       https://ja.wikipedia.org/wiki/�t�F���}�[�̏��藝
*                       a^(p-1) �� 1 (mod p)
*/

#include	<stdio.h>

int main(void)
{
	int		i = 0, sqi, fizz, buzz;
	
	while (100 - i++) {
		sqi = i * i;
		fizz = sqi % 3;
		buzz = sqi * sqi % 5;
		
		if (!fizz) printf("Fizz");
		if (!buzz) printf("Buzz");
		if (fizz && buzz) printf("%d", i);
		printf(" ");
	}
	printf("\n");
	
	return 0;	
}
