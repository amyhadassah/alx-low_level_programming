#include "main.h"
#include <stddef.h>

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to use from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')  /* find the end of dest */
		dest_len++;

	while (src[i] != 0 && i < n)  /* copy src to dest */
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	if (i < n)
		dest[dest_len + i] = '\0';  /* add '\0' terminator */

	return (dest);
}

