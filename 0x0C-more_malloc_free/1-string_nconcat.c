#include "main.h"

/**
 *	malloc_checked - This is a function that allocates memory using malloc
 *	@b: size to be allocated
 *	Return: NULL
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
