#include "main.h"

/**
 * print_sign - pirnt + if n is greater than zero.- if n is less than zero
 * and 0 if n is zero.
 *
 * @n:taks integer tayp inputs for functions.
 *
 * Return: 1 if + , -1 if - , else 0
*/

int print_sign(int n)
{

	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar(0);
	return (0);
	}
	return (0);
}
