#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The source string
 * @accept: The substring
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return ((char *)s);
		s++;
	}

	return (0);
}

