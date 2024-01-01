/**
*       @file           FizzBuzzModOne.c
*       @brief          実行部ワンライナー
*       @author         新渡戸広明
*       @date           2024/01/01
*       @details        
*                       実行部ワンライナーで頑張る
*                       初学者がやりがちな圧縮記法を真似してみた
*                       これだけ圧縮してもちゃんとコンパイルする
*                       やるなあコンパイラ
*
*                       itoa() 非標準のCライブラリ関数
*                       #include <stdlib.h>
*                       char *itoa(int value, char *str, int radix);
*                       戻り値：文字列へのポインタ（第二引数そのもの）
*
*/
#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for itoa()

void main(void)			// これ違反。int main(void) か int main(int argc, char *argv[])
{
	int		i;
	char	b[32];
	
	for(i=0;100-i++;printf("%s%s%s ",i%3?"":"Fizz",i%5?"":"Buzz",i%3&&i%5?itoa(i,b,10):""));

//	for (
//		i = 0;									// for 初期化
//		100 - i++;								// for 継続条件式
//		printf(									// for 更新
//			"%s%s%s ",							// printf 書式文字列
//			i % 3? "": "Fizz",					// printf 変数１
//			i % 5? "": "Buzz",					// printf 変数２
//			i % 3 && i % 5? itoa(i,b,10): ""	// printf 変数３
//		)
//	);
}
