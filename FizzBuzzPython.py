#
# @file         FizzBuzzPython.py
# @brief        Python��FizzBuzz
# @author       �V�n�ˍL��
# @date         2023/01/28
# @details      FizzBuzz��Python�Ŏ�������
#

def fizzbuzz(max):
    for i in range(1, max+1) :
        msg = "fizz" * (i % 3 == 0) + "buzz" * (i % 5 == 0)
        if msg:
            print(msg, end=' ')
        else:
            print(i, end=' ')
    print('')

fizzbuzz(100)
