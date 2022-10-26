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
	strcat(dest, src, n);
	return (dest);
}
