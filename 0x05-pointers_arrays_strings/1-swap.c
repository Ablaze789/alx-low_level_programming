#include <stdio.h>
#include "main.h"

/**
 *	swap_int - This function swaps the value of two integer
 *	@a: Value of first integer
 *	@b: Value of second integer
 */

void swap_int(int *a, int *b)
{
	int *buffer;

	*buffer = a;
	*a = *b;
	*b = *buffer;
}
