#include "main.h"

/**
 *	*_memcpy - The _memset() function fills the first n bytes of
 *	the memory area pointed to by s with the constant byte b.
 *	@dest: The destination memory area
 *	@src: The source memory address
 *	@n: The no of byte to be replaced
 *	Return: Char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
		int i;

		i = 0;
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
}
