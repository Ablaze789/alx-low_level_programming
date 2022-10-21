#include "main.h"

/**
 *	_isdigit - This code checks if a variable is digit
 *	@c: This is the variable
 *
 *	Return: Always 0.
 */

int _isdigit(int c)
{
	int a;

	if (isdigit(c))
	{
		a = 1;
	}
	else
	{
		a = 0;
	}

	return (a);
}
