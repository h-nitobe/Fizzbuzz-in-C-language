/**
*	@file		FizzBuzzModOwn.c
*	@brief		��]��FizzBuzz ��]�����O�ŗp�ӂ���
*	@author		�V�n�ˍL��
*	@date		2022/02/10
*	@details	����Z���߂�����CPU���g���n���ɂȂ����s�^�Ȃ��Ȃ���
*				���Ԃ�R���p�C�����X��������Ă����񂾂��ǂ�
*/
#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

//#define	DEBUG

typedef	unsigned int	U32;

int pml1(U32 x);
void div3(U32 num, U32 *q, U32 *m);
void div5(U32 num, U32 *q, U32 *m);

#ifdef	DEBUG
void test_pml1(void);
void test_div3(void);
void test_div5(void);
#endif

/**
*	@fn			int main(int argc, char *argv[])
*	@brief 		main �֐�
*	@param[in]	argc , argv
*	@param[out]	return
*	@return 	return
*/
int main(int argc, char *argv[])
{
	int		i, max;
	U32		q3, m3, q5, m5;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�

	for (i = 1; i <= max; i++){
		div3(i, &q3, &m3);
		div5(i, &q5, &m5);
		
		if (!m3) {
			printf("Fizz");
		}
		if (!m5) {
			printf("Buzz");
		}
		if (m3 && m5) {
			printf("%d", i);
		}
		printf(" ");
//		if (!m3 && !m5) {
//			printf("\n");
//		}
	}
	printf("\n");

	return 0;
}

/**
*	@fn			int pml1(U32 x)
*	@brief 		Position of Most Left "1"
*	@param[in]	x
*	@return 	�ō��r�b�g�P�̈ʒu �r�b�g�P�������F-1
*	@details 	�񕪒T���ɂ��ō��r�b�g�P�̈ʒu�����߂�
*/
int pml1(U32 x)
{
	U32		y;
	int		n, c;
	
	n = 32;
	c = 16;
	
	do {
		y = x >> c;
		if (y != 0) {
			n -= c;
			x = y;
		}
		c >>= 1;
	} while (c != 0);
	
	return 31 - (n - x);
}

/**
*	@fn			void div3(U32 n, U32 *q, U32 *m)
*	@brief 		�萔�R�ɂ�銄��Z
*	@param[in]	U32 n �����鐔
*	@param[out]	U32 *p ��
*	@param[out]	U32 *m ��]
*	@return 	�Ȃ�
*	@details 	3 * (2�̙p��)�������Ă䂭
*/
void div3(U32 n, U32 *q, U32 *m)
{
	int		i;
	U32		e;
	
	*q = 0;
	
	for (i = pml1(n); i > 0; --i) {		// �ō��r�b�g�P����ʒu�P�܂�
		e = (U32)3 << (i - 1);			// 3 * 2^p 
		if (n >= e) {					// ������l�Ȃ�
			n -= e;						// �@�@������
			*q += (U32)1 << (i - 1);	// �@�@���̊Y���r�b�g���P��
		}
	}
	
	*m = n;								// �c���Ă���̂͏�]
}

/**
*	@fn			void div5(U32 n, U32 *q, U32 *m)
*	@brief 		�萔�T�ɂ�銄��Z
*	@param[in]	U32 n �����鐔
*	@param[out]	U32 *p ��
*	@param[out]	U32 *m ��]
*	@return 	�Ȃ�
*	@details 	5 * (2�̙p��)�������Ă䂭
*/
void div5(U32 n, U32 *q, U32 *m)
{
	int		i;
	U32		e;
	
	*q = 0;
	
	for (i = pml1(n); i > 1; --i) {		// �ō��r�b�g�P����ʒu�Q�܂�
		e = (U32)5 << (i - 2);			// 5 * 2^p
		if (n >= e) {					// ������l�Ȃ�
			n -= e;						// �@�@������
			*q += (U32)1 << (i - 2);	// �@�@���̊Y���r�b�g���P��
		}
	}
	
	*m = n;								// �c���Ă���̂͏�]
}

#ifdef DEBUG
/**
*	@fn			void test_pml1(void),void test_div3(void),void test_div5(void)
*	@brief 		�f�o�O�p
*	@param[in]	�Ȃ�
*	@param[out]	�Ȃ�
*	@return 	�Ȃ�
*	@details 
*/
void test_pml1(void)
{
	printf("%08x %d \n", 0x00000000, pml1(0x00000000));
	printf("%08x %d \n", 0x00000001, pml1(0x00000001));
	printf("%08x %d \n", 0x00000008, pml1(0x00000008));
	printf("%08x %d \n", 0x0fffffff, pml1(0x0fffffff));
	printf("%08x %d \n", 0xffffffff, pml1(0xffffffff));
}

void test_div3(void)
{
	U32		i, q, m;
	
	for (i = 0xfffffff0; i <= 0xfffffffe; i++) {
		div3(i, &q, &m);
		printf("%x %08x %08x %08x %08x\n", i, q, m, i/3, i%3);
	}
}

void test_div5(void)
{
	U32		i, q, m;
	
	for (i = 0x7ffffff0; i <= 0x80000010; i++) {
		div5(i, &q, &m);
		printf("%x %08x %08x %08x %08x\n", i, q, m, i/5, i%5);
	}
}
#endif
