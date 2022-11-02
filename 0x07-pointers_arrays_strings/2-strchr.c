#include "main.h"
#include <stddef.h>

/**
 *	_strchr - This function a pointer to the first occurrence of the character
 *	c in the string s, or NULL if the character is not found
 *	@s: Reference string
 *	@c: input char
 *	Return: Char
 */

char *_strchr(char *s, char c)
{
	for (int i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
