#include <stdio.h>
#include "function_pointers.h"

/**
 *	array_iterator - Execute a function for each element of an arrray
 *	@array: array of numbers
 *	@size: size of the array to convert
 *	@action: The pointer to the function to execute
 *	Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	i = 0;
	if (!array || !action)
	{
		return;
	}
	
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
