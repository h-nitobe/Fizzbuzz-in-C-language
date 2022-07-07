/**
*  FILE        : FizzBuzz.c
*  DATE        : 2022/02/16
*  DESCRIPTION : Main Program
*  CPU TYPE    : 
*
*  NOTE:
*                                Ver.1.00   2022/02/16 新渡戸広明
*
*               count     3210
*                         ||||
*                         |+++----> and 0x7
*                         +-------> shift right 3 and 1
*
*               PORTA 76543210
*                      |   |||
*                      |   ||+----> D1
*                      |   |+-----> D2
*                      |   +------> D3
*                      +----------> D4
*
*/

// インクルード
#include	"iodefine.h"
#include	"initBASE.h"

//　関数プロトタイプ
void main(void);
void dispLED(int num);
void initPeripheral(void);
void wait_1s(void);
void startBeep(void);
void stopBeep(void);
void setBeep(int num);

//　main 関数　引数、戻り値無し
void main(void)
{
	int	i;
	
	initBASE();
	initPeripheral();
	
	for ( ;; ) {
		for (i = 1; i <= 15; i++) {
			wait_1s();
			dispLED(i);
			switch (i % 15) {
				case 0:
					setBeep(1048);	// ^ド
					startBeep();
					break;
				case 3: case 6: case 9: case 12:
					setBeep(660);	// ミ
					startBeep();
					break;
				case 5: case 10:
					setBeep(784);	// ソ
					startBeep();
					break;
				default:
					setBeep(524);	// ド
					startBeep();
					break;
			}
		}
	}
}

void initPeripheral(void)
{
	// init LED
	PORTA.PODR.BYTE &= ~0x47;	//          7654 3210
	PORTA.PDR.BYTE  |=  0x47;	// PORTA 0b 0100 0111
	
	// init Beeper
	PORT2.PODR.BIT.B0 = 0;
	PORT2.PDR.BIT.B0  = 1;
	
	// CMT 初期化
	SYSTEM.PRCR.WORD = 0xA502;	// プロテクト解除
	MSTP(CMT0) = 0;				// CMT0 モジュールストップ状態解除
	SYSTEM.PRCR.WORD = 0xA500;	// プロテクト設定

	CMT0.CMCR.WORD = 0x00C3;	// CMT0 カウントクロック PCLK/512 CMIE許可
	CMT0.CMCNT = 0;				// CMT0 CMCNT タイマカウンタ初期化
	CMT0.CMCOR = 46875 - 1; 	// CMT0 CMCOR 設定 48000000/512/2-1
	
	IR(CMT0,CMI0)  = 0;			// CMI0 IRをクリア 

	CMT.CMSTR0.BIT.STR0 = 1;	// CMT0カウント動作開始	
	
	// MTU3 初期化
	SYSTEM.PRCR.WORD = 0xA502;		/* プロテクト解除 */
	MSTP(MTU) = 0;					/* MTU モジュールストップ解除 */
	SYSTEM.PRCR.WORD = 0xA500;		/* プロテクト設定 */

	MPC.PWPR.BIT.B0WI	= 0;		/* MPC書き込みプロテクトレジスタ書き込み許可 */
	MPC.PWPR.BIT.PFSWE	= 1;		/* MPC書き込みプロテクトレジスタ書き込み許可 */
		
	MPC.PC7PFS.BIT.PSEL = 0x1;		/* PC7PFS PSEL 設定 MTU3 */
		
	MPC.PWPR.BIT.PFSWE	= 0;		/* MPC書き込みプロテクトレジスタ書き込み禁止 */
	MPC.PWPR.BIT.B0WI	= 1;		/* MPC書き込みプロテクトレジスタ書き込み禁止 */

	PORTC.PMR.BIT.B7 = 1;			/* PC1端子は周辺機能で使用 */

	MTU3.TCR.BIT.CKEG = 0;			/* 立ち上がりでカウント */
	MTU3.TCR.BIT.CCLR = 1;			/* TGRAと一致でTCNTクリア */
	MTU3.TCR.BIT.TPSC = 2;			/* PCLK/16でカウント */
		
	MTU3.TMDR.BIT.MD = 2;			/* PWMモード1 */
	MTU3.TMDR.BIT.BFA = 1;			/* TGRCはTGRAのバッファ動作 */
	MTU3.TMDR.BIT.BFB = 1;			/* TGRDはTGRBのバッファ動作 */
	MTU3.TBTM.BIT.TTSA = 1;			/* 転送タイミングは各チャネルのTCNTクリア時 */
	MTU3.TBTM.BIT.TTSB = 1;			/* 転送タイミングは各チャネルのTCNTクリア時 */
		
	MTU.TOER.BIT.OE4A = 1;			/* MTU3,4はアウトプットネーブル*/
	MTU.TOER.BIT.OE4C = 1;			/* MTU3,4はアウトプットネーブル*/

	MTU3.TIORH.BIT.IOB = 1;		/* MTIOC0A端子出力レベル */
								/* - TGRBコンペアマッチでLow出力 */
	MTU3.TIORH.BIT.IOA = 6;		/* - 初期出力High */
								/*   TGRAコンペアマッチでHigh出力 */

	MTU3.TCNT = 0;			/* カウントの初期化 */
	MTU3.TGRA = 0;			 
	MTU3.TGRB = 0;			 
	MTU3.TGRC = 0;			 
	MTU3.TGRD = 0;			 
			
	MTU.TSTR.BIT.CST3 = 0;		/* MTUチャネル3 カウント動作停止 */
}

void wait_1s(void)
{
	int	i;
	
	for (i = 0; i < 2; i++) {
		while ( !IR(CMT0,CMI0) ) ;
		IR(CMT0, CMI0) = 0;	// 割り込みステータスフラグ（CMT0割込みリクエスト:IR28.IR）クリア
	}
}

void dispLED(int num)
{
	PORTA.PODR.BYTE = num & 0x07;
	PORTA.PODR.BIT.B6 = (num & 0x08) ? 1 : 0;	
}

void startBeep(void)
{
	MTU.TSTR.BIT.CST3 = 1;		/* MTUチャネル3 カウント動作開始 */
}

void stopBeep(void)
{
	MTU.TSTR.BIT.CST3 = 0;		/* MTUチャネル3 カウント動作停止 */
}

void setBeep(int num)
{
	int	count = 48000000 / 16 / num - 1;
	
	MTU3.TGRC = count;			// 周期
	MTU3.TGRD = count >> 1;		// デューティー　50%
}
