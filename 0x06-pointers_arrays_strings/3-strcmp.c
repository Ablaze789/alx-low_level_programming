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

	i = strlen(s1);
	j = strlen(s2);

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
