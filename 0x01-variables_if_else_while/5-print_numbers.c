#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: 'This print single digit number of base 10'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
        printf("%d", num);
	putchar('\n');
	return (0);
}
