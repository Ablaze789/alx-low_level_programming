#include "main.h"

/**
*	more_numbers - This prints the mumber 0-14 10 times
*	Return: void
*/

void more_numbers(void)
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
