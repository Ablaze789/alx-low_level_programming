#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *	main - program entry point
 *	@argc: The length of the argv array
 *	@argv: The array of command line argument
 *	Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int product;

	product = 1;
	if (argc > 1 && argc < 3)
	{
		for (i = 1; i < argc; i++)
		{
			product *= argv[i];
		}
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
