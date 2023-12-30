/**
*       @file           FizzBuzzModStr4.c
*       @brief          剰余でFizzBuzz 文字列を玩ぶ
*       @author         新渡戸広明
*       @date           2023/12/31
*       @details        sprintf() 【戻り値】
*                       成功時　：　strに格納した文字数（最後の'\0'は除く）
*                       失敗時　：　EOF
*
*                       !Fizz && !Buzz の判定を放棄する
*                       毎回 i を書いて Fizz Buzz で書きつぶす
*/

#include	<stdio.h>

int main(void)
{
	int			ofs, i = 0;
	char		msg[32];
	
	while (100 - i++) {
		sprintf(msg, "%d", i);								// 毎回 i の値を書く
		ofs = (!(i % 3))? sprintf(msg, "%s", "Fizz"): 0;	// Fizz なら書きつぶす
		if (!(i % 5)) sprintf(msg + ofs, "%s", "Buzz");		// Buzz なら ofs をつけて書きつぶす
		printf("%s ", msg);
	}
	
	return 0;
}
