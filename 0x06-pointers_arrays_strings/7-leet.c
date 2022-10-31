#include "main.h"

/**
 *	leet - This is a function that encodes a string into 1337.
 *	@str: The string to be encoded
 *	Return: Char
 */

char *leet(char *str)
{
	int i;
	int j;

	char str1[] = "AaEeOoTtLl";
	char code[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str1[j] != '\0'; j++)
		{
			if (str[i] == str1[j])
			{
				str[i] = code[j];
			}
		}
	}
	return (str);
}
