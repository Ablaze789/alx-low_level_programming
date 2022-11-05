#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"


/**
 *	checker - check the argument for string
 *	@str: input
 *	Return: 1 (No string) or o (String found!)
 */

int checker(char *str)
{
	unsigned int count;
	
	for (count = 0; count < strlen(str); count++)
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
	}
	return (1);
}

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
	for (i = 1; i < argc; i++)
	{
		if (checker(argv[i]))
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
