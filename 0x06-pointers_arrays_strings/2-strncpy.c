#include "main.h"

/**
 *	_strncpy - This is a function that copies a string.
 *	@dest: string to be copied to.
 *	@src: string to be copied from.
 *	@n: length of string to be copied.
 *	Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		dest[i] = '\0';
	}

	return (dest);
}
