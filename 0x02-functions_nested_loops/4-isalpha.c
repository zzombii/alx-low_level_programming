#include "main.h"

/**
 * _isalpha - check if charcter is alphapet in both lowercase or uppercase
 *
 * @c: takes input form other founctions.
 *
 * Return: 1 if true else 0
*/

int _isalpha(int c)
{
	if (c <= 97 && c >= 122)
	return (1);
	if (c >= 65 && c <= 90)
	return (1);
	return (0);
}
