/**
*       @file           FizzBuzzModOne.c
*       @brief          ���s���������C�i�[
*       @author         �V�n�ˍL��
*       @date           2024/01/01
*       @details        
*                       ���s���������C�i�[�Ŋ撣��
*                       ���w�҂���肪���Ȉ��k�L�@��^�����Ă݂�
*                       ���ꂾ�����k���Ă������ƃR���p�C������
*                       ���Ȃ��R���p�C��
*
*                       itoa() ��W����C���C�u�����֐�
*                       #include <stdlib.h>
*                       char *itoa(int value, char *str, int radix);
*                       �߂�l�F������ւ̃|�C���^�i���������̂��́j
*
*/
#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for itoa()

void main(void)			// ����ᔽ�Bint main(void) �� int main(int argc, char *argv[])
{
	int		i;
	char	b[32];
	
	for(i=0;100-i++;printf("%s%s%s ",i%3?"":"Fizz",i%5?"":"Buzz",i%3&&i%5?itoa(i,b,10):""));

//	for (i = 0; 100 - i++;
//		printf("%s%s%s ",
//			i % 3? "": "Fizz",
//			i % 5? "": "Buzz",
//			i % 3 && i % 5? itoa(i,b,10): ""
//		)
//	);
}
