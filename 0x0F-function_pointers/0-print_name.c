#include <stdio.h>
#include "function_pointers.h"

/**
 *	print_name - This function prints the name inputted
 *	@name: name to be printed
 *	@f: Format to print name
 *	Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
