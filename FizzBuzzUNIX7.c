#include        <stdio.h>

atoi(s)
char s[];
{
        int     i, n;

        n = 0;
        for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
                n = 10 * n + s[i] - '0';

        return(n);
}

main(argc, argv)
int             argc;
char    *argv[];
{
        int     i, num;

        if (argc < 2) {
                printf("Usage: Fizzbuzz 35\n");
                return -1;
        }
        num = atoi(argv[1]);

        for (i = 1; i <= num; i++) {
                if (!(i % 3)) printf("Fizz");
                if (!(i % 5)) printf("Buzz");
                if (i % 3 && i % 5) printf("%d", i);
                printf(" ");
        }

        printf("\n");

        return(0);
}

