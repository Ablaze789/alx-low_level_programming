#include <stdio.h>
#include <stdlib.h>
#include "main.h"


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
	int change;
	int count;
	int coin[];

	sum = 0;
  coin[] ={25, 10, 5, 2, 1}; 
	if (argc == 2)
	{
    change = atoi(argv[1]);
    if (change > 0)
    {
      
    }
		printf("%d\n", sum);
		return (0);
	}
  else
  {
    printf("Error\n");
    return (1);
  }
}
