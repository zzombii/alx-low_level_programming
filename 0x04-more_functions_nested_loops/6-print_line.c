#include "main.h"
/**
*print_line - prints a straight line
*@n:parameter
*Return:returns nothing
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	putchar ('_');
	}
	putchar ('\n');
}
