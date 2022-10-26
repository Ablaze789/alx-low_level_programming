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
	int sep;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ',' ||
		str[i] == ';' ||
		str[i] == '.' ||
		str[i] == '!' ||
		str[i] == '?' ||
		str[i] == '"' ||
		str[i] == '(' ||
		str[i] == ')' ||
		str[i] == '{' ||
		str[i] == '}')
		{
			sep = 1;
		}
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z' && sep == 1)
			{
				str[i] -= 32;
				sep = 0;
		}
		i++;
	}
	return (str);
}
