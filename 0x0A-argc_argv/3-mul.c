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
	int a;
	int b;
	int product;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = a * b;
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
