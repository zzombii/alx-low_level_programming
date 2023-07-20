#include "main.h"

/**
 * main - Entry poitn
 *
 * Description: print alphabet usint _putchar
 *
 * Return: Always 0 (success)
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
