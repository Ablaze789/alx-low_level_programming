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

	i = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (0);
}
