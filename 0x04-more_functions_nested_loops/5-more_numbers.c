#include "main.h"

/**
*	print_numbers - This prints the mumber 0-9
*	Return: void
*/

void print_numbers(void)
{
    char i;
    int a;

    a = 0;

    while (a < 10)
    {
        for (i = '0'; i <= '14'; i++)
        {
            _putchar(i);
        }
        _putchar('\n');
        a++;
    }
    
}
