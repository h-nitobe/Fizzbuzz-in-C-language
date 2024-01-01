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
*/
#include	<stdio.h>
#include	<stdlib.h>

void main(void)
{
	int		i;
	char	b[32];
	
	for(i=0;100-i++;printf("%s%s%s ",i%3?"":"Fizz",i%5?"":"Buzz",i%3&&i%5?itoa(i,b,10):""));
}
