#include "main.h"

/**
 *	puts_half - prints half of a string
 *	@str: string to be printed
 *	Return: Always 0
 */

void puts_half(char *str)
{
	int length_of_the_string;

	length_of_the_string = 0;

	while (*str != '\0')
	{
		length_of_the_string++;
		str++;
	}

	str -= (length_of_the_string / 2);
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
