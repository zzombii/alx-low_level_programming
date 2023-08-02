#include "main.h"

/**
 *_isdigit - function that checks for digit (0 through 9)
 *
 * @c:tesetd character
 *
 * Return: 1 if c is digit else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
