#include "main.h"

/**
 *	_isupper - tells if a char is uppercase
 *	@c: char to check
 *	Return: Always 0.
 */

int _isupper(int c)
{
	int a;

	if (isupper(c))
	{
		a = 1;
	}
	else
	{
		a = 0;
	}

	return (a);
}
