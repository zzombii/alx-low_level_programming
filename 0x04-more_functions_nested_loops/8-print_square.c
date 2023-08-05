#include "main.h"
/**
*print_square - prints squares
*@n: parameter
*Return:returns nothing
*/
void print_square(int n)
{
int i, j;

if (n <= 0)
return;

else
{
for (i = 0; i < n; i++)
{
for (j = 1; j <= n; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
