#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *	main - This is the program main entry point
 *	@argc: This is the length of the argv array
 *	@argv: This is an array of the command line argument
 *	Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
