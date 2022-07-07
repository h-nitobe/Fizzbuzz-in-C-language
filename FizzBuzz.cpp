/**
*	@file		FizzBuzz.cpp
*	@brief		NUCLEO-F411RE �� FizzBuzz
*	@author		�V�n�ˍL��
*	@date		2022/02/18
*	@details	C������ۂ����� C++
*/

#include "mbed.h"

Serial pc(USBTX, USBRX);	// USB �V���A���� PC �Ɛڑ����܂�
DigitalOut myled(LED1);		// LED1 ���g�p���܂�

int main()
{
    pc.baud(115200);		// �{�[���g�ݒ�

    for (int i = 1; i <= 401; i++) {		// ���_���ȃR���p�C���Ȃ̂ł����ŕϐ��錾���Ă�OK
        if (!(i % 3)) pc.printf("Fizz");
        if (!(i % 5)) pc.printf("Buzz");
        if (i % 3 && i % 5) pc.printf("%d", i); 
        pc.printf(" ");

        myled = !myled;		// LED1 ���]
    }
    pc.printf("\n\r");		// \n �����ł͕��s���Ȃ��̂ł����炳�܂� \r
    
    while (1) ;				// ���Ԓn���[�v
}
