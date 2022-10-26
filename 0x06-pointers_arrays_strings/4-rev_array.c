#include "main.h"

/**
 *	reverse_array - This is a function that reverse the
 *	content of an array of integers.
 *	@a: array to be reversed
 *	@n: number of elements of the array
 *	Return: Void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
	}
}
