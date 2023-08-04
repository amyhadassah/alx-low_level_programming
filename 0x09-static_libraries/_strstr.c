#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The source string
 * @needle: The substring
 *
 * Return: Pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *b = needle;

	if (!*needle)
		return (haystack);

	for ( ; *haystack; haystack++)
	{
		if (*haystack != *b)
			continue;

		char *a = haystack;

		while (1)
		{
			if (!*b)
				return (haystack);

			if (*a++ != *b++)
				break;
		}

		b = needle;
	}

	return (0);
}
