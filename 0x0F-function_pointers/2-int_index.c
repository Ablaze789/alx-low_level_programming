#include <stdio.h>
#include "function_pointers.h"

/**
 *	int_index - Execute a function that compares each element of an arrray
 *	@array: array of numbers
 *	@size: size of the array to convert
 *	@cmp: compares elements of array with a given integer
 *	Return: Integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
