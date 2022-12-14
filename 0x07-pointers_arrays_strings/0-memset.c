#include "main.h"

/**
 *	_memset - The _memset() function fills the first n bytes of
 *	the memory area pointed to by s with the constant byte b.
 *	@s: The memory area
 *	@b: The constant byte
 *	@n: The no of byte to be replaced
 *	Return: Char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
