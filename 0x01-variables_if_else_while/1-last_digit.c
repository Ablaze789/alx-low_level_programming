#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 *	main - Entry point
 *
 *	Description: 'This project print the last digit'
 *
 *	Return: Always 0 (Success)
 */

int main(void)
{
	long n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	long digit;

	digit = n % 10;

	if (digit > 5)
		printf("Last digit of %li is %li and is greater than 5", n, digit);
	else
		if (digit == 0)
			printf("Last digit of %li is %li and is 0", n, digit);
		else
			printf("Last digit of %li is %li and is less than 6 and not 0", n, digit);
	return (0);	
}
