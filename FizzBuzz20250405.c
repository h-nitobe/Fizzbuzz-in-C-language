/**
*       @file           FiZZBuzz20250405.c
*       @brief          �p���e�B��FizzBuzz
*       @author         �V�n�ˍL��
*       @date           2025/04/05
*       @details
*           15�J�E���^c�@�p���e�B�@c&5�p���e�B�@c==0�@FizzBuzz
*               1           1       
*               2           1
*               3           0       1           0   Fizz
*               4           1
*               5           0       0           0   Buzz
*               6           0       1           0   Fizz
*               7           1
*               8           1
*               9           0       1           0   Fizz
*              10           0       0           0   Buzz
*              11           1
*              12           0       1           0   Fizz
*              13           1
*              14           1
*               0           0       0           1   FizzBuzz
*
*               �o�h�b�}�C�R���͖ʔ��� FizzBuzz���i�Ǝ���@�j skyriver����
*               https://piclabo.seesaa.net/article/FizzBuzzSolver.html
*/
#include    <stdio.h>

int parity4(int x);

int main(void)
{
    int     i = 0, c = 1;           // i:���[�v�J�E���^�@c:15���[�v�J�E���^

    while (100 - i++) {
        if (parity4(c)) {           // 15���[�v�J�E���^����p���e�B�Ȃ�
            printf("%d", i);        // ���[�v�J�E���g�\��
        } else {                    // 15���[�v�J�E���^�������p���e�B�Ȃ�
            if (parity4(c & 5) || c == 0) printf("Fizz");  // 15���[�v�J�E���^ & 5 ��� �܂��� c �� 0 �Ȃ�uFizz�v�\��
            if (!parity4(c & 5))          printf("Buzz");  // 15���[�v�J�E���^ & 5 ������ �Ȃ�uBuzz�v�\��
        }
        c = (c == 14)? 0: c + 1;    // 15���[�v�J�E���^ ���Z�b�g/�C���N�������g
        printf(" ");
    }
    printf("\n");
    return 0;
}

// �p���e�B�擾�@0: ���� 1: �
int parity4(int x)
{
    x &= 0xf;       // 4�r�b�g�̂ݏ���
    x ^= x >> 2;    
    x ^= x >> 1;
    x &= 0x1;

    return x;
}