#include "main.h"

/**
 *	_strncat - This function is similar to the _strcat function,
 *	except that it will use at most n bytes from src; and src does
 *	not need to be null-terminated if it contains n or more bytes.
 *	@dest: destination variable
 *	@src: source variable
 *	@n: no of bytes to use
 *	Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
