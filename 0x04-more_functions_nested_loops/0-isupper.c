#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 *
 *@c:tesed character
 *
 * Return: (1) if c is uppercase , (0) if c is lowercase
*/
#include <stdio.h>

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}

