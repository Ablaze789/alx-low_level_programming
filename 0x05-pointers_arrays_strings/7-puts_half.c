#include "main.h"

/**
 *	puts_half - prints half of a string
 *	@str: string to be printed
 *	Return: Always 0
 */

void puts_half(char *str)
{
	int length_of_the_string;
	int i;
	int n;

	length_of_the_string = strlen(str);
	n = (length_of_the_string - 1) / 2;

	if (n % 2 != 0)
	{
		n += 1;
	}

	for (i = 0; i < n; i++)
	{
		if (n % 2 == 0)
		{
			printf("%c", str[i + n]);
		}
	}
	printf("\n");
}
