#include <stdio.h>

/**
 *	main - Entry point
 *
 *	Description: 'This prints letters of base 16'
 *
 *	Return: Always 0
 */

int main(void)
{
	int num;
    char letter;

    for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
