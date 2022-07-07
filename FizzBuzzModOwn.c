/**
*	@file		FizzBuzzModOwn.c
*	@brief		剰余でFizzBuzz 剰余を自前で用意する
*	@author		新渡戸広明
*	@date		2022/02/10
*	@details	割り算命令が無いCPUを使うハメになった不運なあなたへ
*				たぶんコンパイラが宜しくやってくれるんだけどね
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
*	@brief 		main 関数
*	@param[in]	argc , argv
*	@param[out]	return
*	@return 	return
*/
int main(int argc, char *argv[])
{
	int		i, max;
	U32		q3, m3, q5, m5;
	
	if (argc < 2) {		// 第２引数が存在しない
		printf("使用法：" __FILE__ "\b\b 16\n");
		return -1;
	}
	
	max = atoi(argv[1]);	// 第２引数を数値で格納　第３引数以降は無視します

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
*	@return 	最左ビット１の位置 ビット１が無い：-1
*	@details 	二分探索により最左ビット１の位置を求める
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
*	@brief 		定数３による割り算
*	@param[in]	U32 n 割られる数
*	@param[out]	U32 *p 商
*	@param[out]	U32 *m 剰余
*	@return 	なし
*	@details 	3 * (2の冪乗)を引いてゆく
*/
void div3(U32 n, U32 *q, U32 *m)
{
	int		i;
	U32		e;
	
	*q = 0;
	
	for (i = pml1(n); i > 0; --i) {		// 最左ビット１から位置１まで
		e = (U32)3 << (i - 1);			// 3 * 2^p 
		if (n >= e) {					// 引ける様なら
			n -= e;						// 　　引いて
			*q += (U32)1 << (i - 1);	// 　　商の該当ビットを１に
		}
	}
	
	*m = n;								// 残っているのは剰余
}

/**
*	@fn			void div5(U32 n, U32 *q, U32 *m)
*	@brief 		定数５による割り算
*	@param[in]	U32 n 割られる数
*	@param[out]	U32 *p 商
*	@param[out]	U32 *m 剰余
*	@return 	なし
*	@details 	5 * (2の冪乗)を引いてゆく
*/
void div5(U32 n, U32 *q, U32 *m)
{
	int		i;
	U32		e;
	
	*q = 0;
	
	for (i = pml1(n); i > 1; --i) {		// 最左ビット１から位置２まで
		e = (U32)5 << (i - 2);			// 5 * 2^p
		if (n >= e) {					// 引ける様なら
			n -= e;						// 　　引いて
			*q += (U32)1 << (i - 2);	// 　　商の該当ビットを１に
		}
	}
	
	*m = n;								// 残っているのは剰余
}

#ifdef DEBUG
/**
*	@fn			void test_pml1(void),void test_div3(void),void test_div5(void)
*	@brief 		デバグ用
*	@param[in]	なし
*	@param[out]	なし
*	@return 	なし
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
