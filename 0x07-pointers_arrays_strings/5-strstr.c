#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the string to search.
 * @needle: the substring to find.
 *
 * Return: a pointer to the beginning of the located substring,
 * or (char *)0 if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr_h, *ptr_n;

	while (*haystack)
	{
		ptr_h = haystack;
		ptr_n = needle;

		while (*ptr_h == *ptr_n && *ptr_n)
		{
			ptr_h++;
			ptr_n++;
		}

		if (*ptr_n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return ((char *)0);
}
