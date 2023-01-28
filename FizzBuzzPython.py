#
# @file         FizzBuzzPython.py
# @brief        Python‚ÅFizzBuzz
# @author       V“nŒËL–¾
# @date         2023/01/28
# @details      FizzBuzz‚ğPython‚ÅÀ‘•‚·‚é
#

def fizzbuzz(max):
    for i in range(1, max+1) :
        msg = "fizz" * (i % 3 == 0) + "buzz" * (i % 5 == 0)
        print((msg if msg else i), end=' ')
    print('')

fizzbuzz(100)
