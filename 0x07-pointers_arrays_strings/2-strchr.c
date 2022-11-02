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
	if (s == NULL)
	{
		return (NULL);
	}
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (s == c)
	{
		return (s);
	}
	return (NULL);
}
