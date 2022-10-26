#include "main.h"

/**
 *	string_toupper - This is a function that changes all lowercase
 *	letters of a string to uppercase.
 *	@n: string
 *	Return: char
 */

char *string_toupper(char *n)
{
	int i;
	int j;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] < 'z')
		{
			n[i] -= 32;
		}
		i++;
	}
	return (n);
}

