#include "main.h"

/**
 *	print_rev - This function that prints a string in reverse,
 *	followed by a new line
 *	@s: String to be printed in reverse
 *	Return: Always 0
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}
