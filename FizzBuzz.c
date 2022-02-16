/**
*  FILE        : FizzBuzz.c
*  DATE        : 2022/02/16
*  DESCRIPTION : Main Program
*  CPU TYPE    : 
*
*  NOTE:
*                                Ver.1.00   2022/02/16 �V�n�ˍL��
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

// �C���N���[�h
#include	"iodefine.h"
#include	"initBASE.h"

//�@�֐��v���g�^�C�v
void main(void);
void dispLED(int num);
void initPeripheral(void);
void wait_1s(void);
void startBeep(void);
void stopBeep(void);
void setBeep(int num);

//�@main �֐��@�����A�߂�l����
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
					setBeep(1048);	// ^�h
					startBeep();
					break;
				case 3: case 6: case 9: case 12:
					setBeep(660);	// �~
					startBeep();
					break;
				case 5: case 10:
					setBeep(784);	// �\
					startBeep();
					break;
				default:
					setBeep(524);	// �h
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
	
	// CMT ������
	SYSTEM.PRCR.WORD = 0xA502;	// �v���e�N�g����
	MSTP(CMT0) = 0;				// CMT0 ���W���[���X�g�b�v��ԉ���
	SYSTEM.PRCR.WORD = 0xA500;	// �v���e�N�g�ݒ�

	CMT0.CMCR.WORD = 0x00C3;	// CMT0 �J�E���g�N���b�N PCLK/512 CMIE����
	CMT0.CMCNT = 0;				// CMT0 CMCNT �^�C�}�J�E���^������
	CMT0.CMCOR = 46875 - 1; 	// CMT0 CMCOR �ݒ� 48000000/512/2-1
	
	IR(CMT0,CMI0)  = 0;			// CMI0 IR���N���A 

	CMT.CMSTR0.BIT.STR0 = 1;	// CMT0�J�E���g����J�n	
	
	// MTU3 ������
	SYSTEM.PRCR.WORD = 0xA502;		/* �v���e�N�g���� */
	MSTP(MTU) = 0;					/* MTU ���W���[���X�g�b�v���� */
	SYSTEM.PRCR.WORD = 0xA500;		/* �v���e�N�g�ݒ� */

	MPC.PWPR.BIT.B0WI	= 0;		/* MPC�������݃v���e�N�g���W�X�^�������݋��� */
	MPC.PWPR.BIT.PFSWE	= 1;		/* MPC�������݃v���e�N�g���W�X�^�������݋��� */
		
	MPC.PC7PFS.BIT.PSEL = 0x1;		/* PC7PFS PSEL �ݒ� MTU3 */
		
	MPC.PWPR.BIT.PFSWE	= 0;		/* MPC�������݃v���e�N�g���W�X�^�������݋֎~ */
	MPC.PWPR.BIT.B0WI	= 1;		/* MPC�������݃v���e�N�g���W�X�^�������݋֎~ */

	PORTC.PMR.BIT.B7 = 1;			/* PC1�[�q�͎��Ӌ@�\�Ŏg�p */

	MTU3.TCR.BIT.CKEG = 0;			/* �����オ��ŃJ�E���g */
	MTU3.TCR.BIT.CCLR = 1;			/* TGRA�ƈ�v��TCNT�N���A */
	MTU3.TCR.BIT.TPSC = 2;			/* PCLK/16�ŃJ�E���g */
		
	MTU3.TMDR.BIT.MD = 2;			/* PWM���[�h1 */
	MTU3.TMDR.BIT.BFA = 1;			/* TGRC��TGRA�̃o�b�t�@���� */
	MTU3.TMDR.BIT.BFB = 1;			/* TGRD��TGRB�̃o�b�t�@���� */
	MTU3.TBTM.BIT.TTSA = 1;			/* �]���^�C�~���O�͊e�`���l����TCNT�N���A�� */
	MTU3.TBTM.BIT.TTSB = 1;			/* �]���^�C�~���O�͊e�`���l����TCNT�N���A�� */
		
	MTU.TOER.BIT.OE4A = 1;			/* MTU3,4�̓A�E�g�v�b�g�l�[�u��*/
	MTU.TOER.BIT.OE4C = 1;			/* MTU3,4�̓A�E�g�v�b�g�l�[�u��*/

	MTU3.TIORH.BIT.IOB = 1;		/* MTIOC0A�[�q�o�̓��x�� */
								/* - TGRB�R���y�A�}�b�`��Low�o�� */
	MTU3.TIORH.BIT.IOA = 6;		/* - �����o��High */
								/*   TGRA�R���y�A�}�b�`��High�o�� */

	MTU3.TCNT = 0;			/* �J�E���g�̏����� */
	MTU3.TGRA = 0;			 
	MTU3.TGRB = 0;			 
	MTU3.TGRC = 0;			 
	MTU3.TGRD = 0;			 
			
	MTU.TSTR.BIT.CST3 = 0;		/* MTU�`���l��3 �J�E���g�����~ */
}

void wait_1s(void)
{
	int	i;
	
	for (i = 0; i < 2; i++) {
		while ( !IR(CMT0,CMI0) ) ;
		IR(CMT0, CMI0) = 0;	// ���荞�݃X�e�[�^�X�t���O�iCMT0�����݃��N�G�X�g:IR28.IR�j�N���A
	}
}

void dispLED(int num)
{
	PORTA.PODR.BYTE = num & 0x07;
	PORTA.PODR.BIT.B6 = (num & 0x08) ? 1 : 0;	
}

void startBeep(void)
{
	MTU.TSTR.BIT.CST3 = 1;		/* MTU�`���l��3 �J�E���g����J�n */
}

void stopBeep(void)
{
	MTU.TSTR.BIT.CST3 = 0;		/* MTU�`���l��3 �J�E���g�����~ */
}

void setBeep(int num)
{
	int	count = 48000000 / 16 / num - 1;
	
	MTU3.TGRC = count;			// ����
	MTU3.TGRD = count >> 1;		// �f���[�e�B�[�@50%
}
