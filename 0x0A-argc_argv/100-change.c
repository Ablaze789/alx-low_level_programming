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
	int change;
	int count;
	int pieces;
	int coin[] = {25, 10, 5, 2, 1};

	count = 0;
	if (argc == 2)
	{
		change = atoi(argv[1]);
		if (change > 0)
		{
			int arr_size = sizeof(coin) / sizeof(coin[1]);
			
			for (int i = 0; i < arr_size; i++)
			{
				if ((change / coin[i]) > 0)
				{
					pieces = change / coin[i];
					count += pieces;
					change -= (coin[i] * pieces);
				}
			}
		}
		printf("%d\n", count);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
