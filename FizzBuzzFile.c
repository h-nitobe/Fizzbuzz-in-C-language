/**
*	@file		FizzBuzzFile.c
*	@brief		ファイル操作でFizzBuzz
*	@author		新渡戸広明
*	@date		2022/02/06
*	@details	そこまでするか？
*/

#include	<stdio.h>	// for printf(),fopen(),fclose()他
#include	<stdlib.h>	// for atoi(), system()

void makeFile(int num, char *fn);

/**
*	@fn			int main(int argc, char *argv[])
*	@brief 		main 関数
*	@param[in]	argc , argv
*	@return 	return
*/
int main(int argc, char *argv[])
{
	int		max, i;
	char	fileName[16], str[16];
	FILE	*fp;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します
	
	for (i = 3; i <= max; i += 3) {
		makeFile(i, "Fizz");
	}

	for (i = 5; i <= max; i += 5) {
		makeFile(i, "Buzz");
	}
	
	system("dir *.fb");				// linux では動きません

	for (i = 1; i <= max; i++) {
		sprintf(fileName, "%d.fb", i);
		fp = fopen(fileName, "r");
		if (fp == NULL) {			// ファイルが存在しない
			printf("%d ", i);
		} else {					// ファイルが存在する
			fscanf(fp, "%s", str);
			printf("%s ",str);
			fclose(fp);
		}
	}
	printf("\n");

	system("del *.fb");				// お掃除 linux では動きません

	return 0;
}

/**
*	@fn			void makeFile(int num, char *fn)
*	@brief 		ファイルを作成する
*	@param[in]	num, *fn
*	@return 	なし
*/
void makeFile(int num, char *fn)
{
	FILE	*fp;
	char	fileName[16];
	
	sprintf(fileName, "%d.fb", num);
	if ((fp = fopen(fileName, "a")) != NULL) {
		fprintf(fp, "%s", fn);
		fclose(fp);
	}
}
