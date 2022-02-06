/**
*	@file		FizzBuzzModSce.c
*	@brief		剰余でFizzBuzz　短絡評価(short-circuit evaluation)
*	@author		新渡戸広明
*	@date		2022/02/06
*	@details	FizzBuzzを剰余で判定する　短絡評価版　使っちゃダメ
*			JIS X3010:2003「6.5.13 論理AND演算子」
*			ビット単位の２項＆演算子と異なり，&& 演算子は左から右への評価を保証する。
*			第１オペランドの評価の直後を副作用完了点とする。
*			第１オペランドの値が０と比較して等しい場合，第２オペランドは評価しない。
*/

#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

int main(int argc, char *argv[])
{
	int	fizz = 0, buzz = 0;
	int	max, i;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：FizzBuzzMod 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 1; i <= max; i++) {
		fizz = !(i % 3);	// ３の倍数？
		buzz = !(i % 5);	// ５の倍数？
	
		fizz && printf("Fizz");
		
		buzz && printf("Buzz");
	
		(!fizz && !buzz) && printf("%d", i);

		printf(" ");
	}
	printf("\n");
	
	return 0;
}
