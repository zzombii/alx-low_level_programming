#include "mian.h"

/**
 * _islower - checks if the charecter is a lowercase
 *
 * @c: takes input form other functions.
 *
 * Return: 1 if c is ture else 0
 */

int _islower(int c)
{
	if (c >= 97  &&  c <= 122)
		return (1);
	return (0);
}
