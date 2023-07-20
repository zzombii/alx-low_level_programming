#include "main.h"

/**
 * print_alphabet_x10 - function that print the alphabit 10 times
 *
*/

void print_alphabet_x10(void)
{

    char i='a';
    int n;
    
    for (n = 0; n <= 9; n++)
    {
        for(i = 'a'; i <= 'z'; i++)
        { 
        _putchar(i);   
        }
        _putchar ('\n');
    }
}
