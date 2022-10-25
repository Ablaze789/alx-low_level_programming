#include "main.h"

/**
 *	rev_string - reverses a string
 *	@s: string to be reversed
 *	Return: Always 0
 */

void rev_string(char *s)
{
	int len;
	int i;
	char temp[500];
	int d;

	d = 0;
	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		if (d < len)
		{
			temp[d] = *(s + i);
			d++;
		}
	}
	for (i = 0; i < len; i++)
	{
		*(s + i) = temp[i];
	}
}
