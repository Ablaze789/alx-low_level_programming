#include "main.h"

/**
 *	cap_string - This is a function that changes all lowercase
 *	letters of a string to uppercase.
 *	@str: string
 *	Return: char
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}

		if (str[i] == '\t' ||
		str[i] == '\n' ||
		str[i] == ' ' ||
		str[i] == ',' ||
		str[i] == ';' ||
		str[i] == '.' ||
		str[i] == '!' ||
		str[i] == '?' ||
		str[i] == '"' ||
		str[i] == '(' ||
		str[i] == ')' ||
		str[i] == '{' ||
		str[i] == '}' ||
		i == 0)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
