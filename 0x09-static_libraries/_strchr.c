#include "main.h"

/**
 * _strchr - Locates a character in string
 * @s: The source string
 * @c: The character to locate
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
			return (0);
	}

	return ((char *)s);
}
