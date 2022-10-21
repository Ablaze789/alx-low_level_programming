#include "main.h"

/**
*	more_numbers - This prints the mumber 0-14 10 times
*	Return: void
*/

void more_numbers(void)
{
	int i;
	int a;

	a = 0;

	while (a < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar('1');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		a++;
	}
}
