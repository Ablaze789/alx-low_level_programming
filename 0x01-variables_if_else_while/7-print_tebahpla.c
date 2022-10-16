#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This print lowercase alphabet in reverse order'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
		putchar(rev);
	putchar('\n');
	return (0);
}
