#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string in which to find the character.
 * @c: character to find in the string.
 *
 * Return: pointer to first occurrence of c in s, or (char *)0 if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return ((char *)0);
}
