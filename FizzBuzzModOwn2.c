/**
*	@file		FizzBuzzModOwn2.c
*	@brief		��]��FizzBuzz ��]�����O�ŗp�ӂ���
*	@author		�V�n�ˍL��
*	@date		2022/02/15
*	@details	�l�^��
*/
#include	<stdio.h>	// for printf()
#include	<stdlib.h>	// for atoi()

//#define	DEBUG

int mulhs(int u, int v);
int mod3(int n);
int mod5(int n);

#ifdef	DEBUG
void test_mod3(void);
void test_mod5(void);
#endif

/**
*	@fn			int main(int argc, char *argv[])
*	@brief 		main �֐�
*	@param[in]	int argc, char *argv[]
*	@param[out]	
*	@return 	0
*/
int main(int argc, char *argv[])
{
	int		i, max;
	int		fizz, buzz;
	
	if (argc < 2) {		// ��Q���������݂��Ȃ�
		printf("�g�p�@�F" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// ��Q�����𐔒l�Ŋi�[�@��R�����ȍ~�͖������܂�

	for (i = 1; i <= max; i++){
		fizz = !mod3(i);
		buzz = !mod5(i);
		
		if (fizz) {
			printf("Fizz");
		}
		if (buzz) {
			printf("Buzz");
		}
		if (!fizz && !buzz) {
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	
#ifdef DEBUG
	test_mod3();
	test_mod5();
#endif

	return 0;
}

/**
*	@fn			int mod3(int n)
*	@brief 		3 �ł̏��Z�̏�]
*	@param[in]	int n �폜��
*	@param[out]	int p ��
*	@param[out]	int m ��]
*	@return 	int m ��]
*	@details 	�u�n�b�J�[�̊y���݁v
*				Hackers's Delight: Henry S. Warren, Jr.
*				ISBN978-4-434-20159-2
*				P.168
*/
int mod3(int n)
{
	int		q;
	int		M = 0x55555556;		// �}�W�b�N�i���o�[(2**32+2/3)�����[�h
	
	q = mulhs(n, M);			// q = floor(M * n /2 ** 32)

	if (n < 0) q++;				// n �����Ȃ�� q �� 1 �����Z
	
	return n - q * 3;			// r = n - q * 3 �ɂ��
}

/**
*	@fn			int mod5(int n)
*	@brief 		5 �ł̏��Z�̏�]
*	@param[in]	int n �폜��
*	@param[out]	int p ��
*	@param[out]	int m ��]
*	@return 	int m ��]
*	@details 	�u�n�b�J�[�̊y���݁v
*				Hackers's Delight: Henry S. Warren, Jr.
*				ISBN978-4-434-20159-2
*				P.169
*/
int mod5(int n)
{
	int		q;
	int		M = 0x66666667;		// �}�W�b�N�i���o�[(2**32+3/5)�����[�h
	
	q = mulhs(n, M);			// q = floor(M * n /2 ** 32)
	q >>= 1;					// shift right signed ? ��������
	
	if (n < 0) q++;				// n �����Ȃ�� q �� 1 �����Z
	
	return n - q * 5;			// r = n - q * 5 �ɂ��
}

/**
*	@fn			int mulhs(int u, int v)
*	@brief 		64�r�b�g�ς̏��32�r�b�g
*	@param[in]	int u, int v
*	@param[out]	�Ȃ�
*	@return 	64�r�b�g�ς̏��32�r�b�g
*	@details	�u�n�b�J�[�̊y���݁v
*				Hackers's Delight: Henry S. Warren, Jr.
*				ISBN978-4-434-20159-2
*				P.140
*/
int mulhs(int u, int v)
{
	unsigned		u0, v0, w0;
	int				u1, v1, w1, w2, t;
	
	u0 = u & 0xFFFF; u1 = u >> 16;
	v0 = v & 0xFFFF; v1 = v >> 16;
	w0 = u0 * v0;
	t  = u1 * v0 + (w0 >> 16);
	w1 = t & 0xFFFF;
	w2 = t >> 16;
	w1 = u0 * v1 + w1;
	
	return u1 * v1 + w2 + (w1 >> 16);
}

#ifdef DEBUG
/**
*	@fn			void test_mod3(void),void test_mod(void)
*	@brief 		�f�o�O�p
*	@param[in]	�Ȃ�
*	@param[out]	�Ȃ�
*	@return 	�Ȃ�
*	@details 
*/
void test_mod3(void)
{
	int		i, m;
	
	for (i = -2147483648; i <= -2147483638; i++) {
		m = mod3(i);
		printf("%x %08x %08x\n", i, m, i%3);
	}
	for (i = -10; i <= 0x10; i++) {
		m = mod3(i);
		printf("%x %08x %08x\n", i, m, i%3);
	}
	for (i = 2147483638; i <= 2147483646; i++) {
		m = mod3(i);
		printf("%x %08x %08x\n", i, m, i%3);
	}
		m = mod3(2147483647);
	printf("%x %08x %08x\n", i, m, i%3);
}

void test_mod5(void)
{
	int		i, m;
	
	for (i = -2147483648; i <= -2147483638; i++) {
		m = mod5(i);
		printf("%x %08x %08x\n", i, m, i%5);
	}
	for (i = -10; i <= 0x10; i++) {
		m = mod5(i);
		printf("%x %08x %08x\n", i, m, i%5);
	}
	for (i = 2147483638; i <= 2147483646; i++) {
		m = mod5(i);
		printf("%x %08x %08x\n", i, m, i%5);
	}
		m = mod5(2147483647);
	printf("%x %08x %08x\n", i, m, i%5);
}
#endif
