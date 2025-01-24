/**
*       @file           FizzBuzz20250120.c
*       @brief          �Ȃ���Ύ����ō��΂����̂�I FizzBuzz
*       @author         �V�n�ˍL��
*       @date           2025/01/20
*       @details        �u�Ȃ���Ύ����ō��΂����̂�I�v�i���{�n���q�j?
*                       ���_���ȃv���O���~���O����ɂ́u������̌J��Ԃ����\�b�h�v����������Ă��܂����A
*                       C����̕W�����C�u�����ɂ͓��Y�֐��͑��݂��܂���B
*                       �Ȃ���Ύ����ō��΂����̂�I
*                       �Ƃ����킯�łł����グ�Ă݂��B
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

// ������J��Ԃ��o�͊֐�
// �����F
//		s : ������|�C���^
//		n : �J��Ԃ����i�O�ȏ�j
// �߂�l�F
//		�󎚕�����
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
