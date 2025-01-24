/**
*       @file           FizzBuzz20250120.c
*       @brief          なければ自分で作ればいいのよ！ FizzBuzz
*       @author         新渡戸広明
*       @date           2025/01/20
*       @details        「なければ自分で作ればいいのよ！」（涼宮ハルヒ）?
*                       モダンなプログラミング言語には「文字列の繰り返しメソッド」が実装されていますが、
*                       C言語の標準ライブラリには当該関数は存在しません。
*                       なければ自分で作ればいいのよ！
*                       というわけででっち上げてみた。
*/
#include	<stdio.h>

int rep(char *s, int n);

int main(void)
{
	int		i;
	
	i = 0;
	while (100 - i++) {
		rep("Fizz", !(i%3)) | rep("Buzz", !(i%5)) || printf("%d", i);
		printf(" ");
	}
	printf("\n");
	
	return 0;
}

// 文字列繰り返し出力関数
// 引数：
//		s : 文字列ポインタ
//		n : 繰り返す数（０以上）
// 戻り値：
//		印字文字数
//
int rep(char *s, int n)
{
	int		ret = 0;
	
	if (0 < n) {
		while (n--) {
			ret += printf("%s", s);
		}
	}

	return ret;
}
