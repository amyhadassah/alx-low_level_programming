#include "main.h"
#include <stddef.h>

/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to copy from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/*
	 * If src is less than n characters long,
	 * the remaining characters in dest are filled with '\0' characters
	 */
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
