#include "main.h"

/**
 * _strncat - Appends the first n characters of src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to be appended
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
