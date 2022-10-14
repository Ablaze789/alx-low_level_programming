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
	long long n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int digit = n % 10;

	if (digit > 5)
		printf("Last digit of %lli is %d and is greater than 5", n, digit);
	else
		if (digit == 0)
			printf("Last digit of %lli is %d and is 0", n, digit);
		else
			printf("Last digit of %lli is %d and is less than 6 and not 0", n, digit);
	return (0);	
}
