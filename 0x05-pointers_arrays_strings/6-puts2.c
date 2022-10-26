#include "main.h"

/**
 *	puts2 - prints every other character of a string
 *	@str: string to be printed
 *	Return: Always 0
 */

void puts2(char *str)
{
	int len;
	int i;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
