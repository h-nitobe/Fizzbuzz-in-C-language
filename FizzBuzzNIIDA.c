/**
*	@file		FizzBuzzNIIDA.c
*	@brief		新井田教授のFizzBuzz
*	@author		新井田厚
*	@date		2022/04/01
*	@details	ループの中で判断を行わない
*/

#include <stdio.h>
#include <stdlib.h>  // atoi

struct {
    char *fmt;     int  next;
} table[] = {
    { "FizzBuzz ",  1 },  // 0, 15
    { "%d ",        2 },
    { "%d ",        3 },
    { "Fizz ",      4 },  // 3
    { "%d ",        5 },  
    { "Buzz ",      6 },  // 5
    { "Fizz ",      7 },  // 6
    { "%d ",        8 },
    { "%d ",        9 },
    { "Fizz ",     10 },  // 9
    { "Buzz ",     11 },  // 10
    { "%d ",       12 },
    { "Fizz ",     13 },  // 12
    { "%d ",       14 },   
    { "%d ",        0 },
};

int main(int argc, char *argv[])
{
	int	i;						// for C89 2022/04/01 Add. H.Nitobe
	int beg = atoi(argv[1]);
    int end = atoi(argv[2]);
    int index = beg % 15;    // 0 .. 14

//    for (int i = beg; i <= end; i++) {	// C99 ならOK　C89ではNG
	for (i = beg; i <= end; i++) {	// for C89 2022/04/01 Mod. H.Nitobe
        printf( table[index].fmt, i);
        index = table[index].next;
    }
    return 0;
}
