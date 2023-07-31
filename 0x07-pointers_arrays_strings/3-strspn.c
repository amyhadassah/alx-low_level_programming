#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to scan.
 * @accept: string containing the characters to match.
 *
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *ptr = accept;

	while (*s)
	{
		while (*ptr)
		{
			if (*s == *ptr)
			{
				count++;
				break;
			}
			ptr++;
		}
		if (!*ptr)
		{
			break;
		}

		s++;
		ptr = accept;
	}

	return (count);
}
