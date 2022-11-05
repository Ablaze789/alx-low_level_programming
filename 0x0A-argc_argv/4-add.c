#include <stdio.h>
#include <stdlib.h>
#iclude <ctype.h>
#include <string.h>
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
	int i;
	int sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			if (isdigit(argv[i]))
			{
				a = atoi(argv[i]);
				sum += a;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
}
