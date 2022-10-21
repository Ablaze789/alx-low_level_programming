#include "main.h"

/**
*	print_line - This prints a line with _
*	@n: number of times to print _
*	Return: void
*/

void print_line(int n)
{

	if (n > 0)
	{
		for (int i = n; i > 0; i--)
		{
			if (n > 0)
			{
				_putchar('_');
			}
		}
		_putchar('\n');
	}
}
