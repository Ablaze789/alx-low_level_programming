#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This code prints all the possible combination of single digit numbers'
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	int single;

	for (single = '0'; single <= '9'; single++)
		putchar(single);
		if (single != '9')
			putchar(', ');
			putchar(' ');
	putchar('\n');

	return (0);
}
