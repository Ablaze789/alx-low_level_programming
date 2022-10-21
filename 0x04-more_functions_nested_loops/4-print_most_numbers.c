#include "main.h"

/**
*	print_most_numbers - This prints the mumber 0-9 with the
*	exception of 2 and 4
*	Return: void
*/

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' || i != '4')
		{
			putchar(i);
		}
	}
	putchar('\n');
}
