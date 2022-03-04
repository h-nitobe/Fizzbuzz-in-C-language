#include <conio.h>
#include <string.h>

int main()
{
	int     i;
	
    clrscr();
	gotoxy(0, 0);
	
	cprintf("**** Hello Family Computer ****\n\r");
	cprintf("-------------------------------\n\r");
	
	
	for (i = 1; i <= 188; i++) {
		if (!(i % 3)) cprintf("Fizz");
		if (!(i % 5)) cprintf("Buzz");
		if (i % 3 && i % 5) cprintf("%d", i);
		 cprintf(" ");
	}

	for ( ;; ) ;

	return 0;
}
