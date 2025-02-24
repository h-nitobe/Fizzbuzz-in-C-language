#include    <stdio.h>

int main(void)
{
    union {
        int    num[2];
        char   arr[8];
    } U = {
        {2054842694, 2054845762} // 0x 7a7a6946 7a7a7542 zziFzzuB
    };
    int   i = 0, j, k;

    while (100 - i++) {
        for (j = 0, k = i%3? 4: 0; k < (i%5? 4: 8); k++) {
            j += putchar(U.arr[k]);
        }
        if (!j) {
            printf("%d", i);
        }
        putchar(' ');
    }
    putchar('\n');

    return 0;
}