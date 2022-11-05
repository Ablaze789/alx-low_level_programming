#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *	main - This is the program entry point
 *	@argc: This the length of the argv array
 *	@argv: This is the array that contains the command line arguments
 *	Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d", argc);
	return (0);
}
