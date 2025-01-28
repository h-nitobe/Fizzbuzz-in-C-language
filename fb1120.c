/**
*	@file		fb1120.c
*	@brief		PDP11/20 でFizzBuzz
*	@author		新渡戸広明
*	@date		2025/01/28
*	@details	ファイル名は８文字以内
*			改行は LF のみ。CR が入っていると怒られる。
*			出力ファイル名指定 -o オプションがない。
*/
				/* #include はまだない */
main(argc, argv)
char argv[][];			/* ここで仮引数宣言 int は省略可*/
{
	extern	printf;		/* #include の代わり */
	int	i;

	i = 0;
	while (100 - i++) {	/* for 文はまだ無い */
		if (i % 15 == 0)     printf("FizzBuzz ");
		else if (i % 3 == 0) printf("Fizz ");
		else if (i % 5 == 0) printf("Buzz ");
		else                 printf("%d ", i);
	}
	printf("\n");

	return (0);		/* return 0; とは書けない */
}
