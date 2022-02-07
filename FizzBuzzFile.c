/**
*	@file		FizzBuzzFile.c
*	@brief		�t�@�C�������FizzBuzz
*	@author		�V�n�ˍL��
*	@date		2022/02/06
*	@details	�����܂ł��邩�H
*/

#include	<stdio.h>	// for printf(),fopen(),fclose()��
#include	<stdlib.h>	// for atoi(), system()

void makeFile(int num, char *fn);

/**
*	@fn			int main(int argc, char *argv[])
*	@brief 		main �֐�
*	@param[in]	argc , argv
*	@return 	return
*/
int main(int argc, char *argv[])
{
	int		max, i;
	char	fileName[16], str[16];
	FILE	*fp;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�
	
	for (i = 3; i <= max; i += 3) {
		makeFile(i, "Fizz");
	}

	for (i = 5; i <= max; i += 5) {
		makeFile(i, "Buzz");
	}
	
	system("dir *.fb");				// linux �ł͓����܂���

	for (i = 1; i <= max; i++) {
		sprintf(fileName, "%d.fb", i);
		fp = fopen(fileName, "r");
		if (fp == NULL) {			// �t�@�C�������݂��Ȃ�
			printf("%d ", i);
		} else {					// �t�@�C�������݂���
			fscanf(fp, "%s", str);
			printf("%s ",str);
			fclose(fp);
		}
	}
	printf("\n");

	system("del *.fb");				// ���|�� linux �ł͓����܂���

	return 0;
}

/**
*	@fn			void makeFile(int num, char *fn)
*	@brief 		�t�@�C�����쐬����
*	@param[in]	num, *fn
*	@return 	�Ȃ�
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
