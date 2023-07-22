#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 * @f:takes number input
 * Return: d
*/

int print_last_digit(int f)
{
	int d;

	if (f < 0)
	{
		d = (f % 10) * -1;
	}
	else
	{
		d = f % 10;
	}

		_putchar(d + '0');
		return (d);
}

