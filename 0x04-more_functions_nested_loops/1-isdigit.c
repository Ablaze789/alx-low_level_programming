#include "main.h"

/**
 * _isdigit - 
 *
 * Return: Always 0.
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
