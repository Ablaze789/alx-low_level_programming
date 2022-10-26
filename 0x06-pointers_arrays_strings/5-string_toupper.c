#include "main.h"

/**
 *	string_toupper - This is a function that changes all lowercase
 *	letters of a string to uppercase.
 *	@str: string
 *	Return: char
 */

char *string_toupper(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] < 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

