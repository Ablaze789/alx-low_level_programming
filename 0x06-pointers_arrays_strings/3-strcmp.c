#include "main.h"

/**
 *	_strcmp - This is a function that compares two strings.
 *	@s1: The string being compared
 *	@s2: The string being compared with .
 *	Return: ALways 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int n;

	i = 0;
	j = 0;
	
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	if (i < j)
	{
		n = -15;
	}
	else
	{
		if (i > j)
		{
			n = 15;
		}
		else
		{
			n = 0;
		}
	}

	return (n);
}
