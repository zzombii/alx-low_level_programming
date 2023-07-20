#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print alphbits
*/

void print_alphabet(void)
{

	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
		_putchar('\n');
}

