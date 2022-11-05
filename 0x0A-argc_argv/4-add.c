#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 *	checker - check the argument for string
 *	@str: input
 *	Return: Always 0 (Success)
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
	int count;
	int sum;

	sum = 0;
	for (count = 1; count < argc; count++)
	{
		if (checker(argv[count]))
		{
			a = atoi(argv[count]);
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
