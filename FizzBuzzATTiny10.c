 * FizzBuzzATTiny10.c
 *
 * Created: 2023/06/24 4:25:05
 * Author : Hiroaki Nitobe
 */ 

#include <avr/io.h>
#include <util/delay.h>

int printStr(char *str);
int printNum(int num);
void send(char c);

int main(void)
{
	static int	i = 0;

	DDRB = 0b00000100;
	PORTB &= ~0b00000100;
	
	while (i++ ^ 100) { 
		printStr((i%3)? "":"Fizz") | printStr((i%5)? "":"Buzz") || printNum(i);
		printStr(" ");
	}
	printStr("\n\r");
	
	for (;;) {		
	}
	
	return 0;
}

int printNum(int num)
{
	int		i = 0, j;
	char	str[16] = {0};
	
	do {
		str[i++] = num % 10 + '0';
		num /= 10;
	} while(0 < num);
	str[i] = '\0';
	
	for (j = i - 1; 0 <= j; --j) {
		send(str[j]);
	}
	
	return i;
}

int printStr(char *str)
{
	int		i = 0, c;
	
	while (c = str[i++]) {
		send(c);
	}
	
	return (i - 1);
}


void send(char c)
{
	int i;
	
	PORTB |= 0b00000100;	// スタートビット　1
	_delay_us(810);
	for (i = 0; i < 8; i++) {
		if (c & (1 << i)) {
			PORTB &= ~0b00000100;	// 0
		} else {
			PORTB |= 0b00000100;	// 1
		}
		_delay_us(810);
	}
	PORTB &= ~0b00000100;	// ストップビット　0
	_delay_us(810);
}
