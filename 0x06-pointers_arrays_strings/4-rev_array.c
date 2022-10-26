#include "main.h"

/**
 *	reverse_array - This is a function that reverse the
 *	content of an array of integers.
 *	@a: array to be reversed
 *	@n: number of elements of the array
 *	Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}
}
