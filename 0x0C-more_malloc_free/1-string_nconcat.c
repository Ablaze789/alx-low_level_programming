#include "main.h"

/**
 *	string_nconcat - This is a a function that concatenates two strings.
 *	@s1: first string
 *	@s2: second string
 *	@n: no of byte to concatenate
 *	Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	void *p;
	unsigned int str_one;
	unsigned int str_two;
	unsigned int i;

	str_one = 0;
	str_two = 0;
	if (s1 == NULL)
		s1 = "";

	if (s1 == NULL)
		s1 = "";

	while (s1[str_one] != '\0')
		str_one++;

	while (s1[str_two] != '\0')
		str_two++;

	if (n > str_two)
		n = str_two;
		p = malloc((size1 + n + 1) * sizeof(char));

	if (p == NULL)
	{
		return (0);
	}

	for (i = 0; i < str_one; i++)
	{
		p[i] = s1[i];
	}

	for (; i < str_two; i++)
	{
		p[i] = s2[i - str_one];
	}

	return (p);
}
