#include <stdio.h>

/**
 * 	main - Entry point
 *
 * 	Description: 'This prints the size of different data type'
 *
 * 	Return: Always 0 (Sucess)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %f byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %f byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %f byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %f byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %f byte(s)\n", (unsigned long)sizeof(e);
	return (0);
}
