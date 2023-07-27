#include "main.h"
#include <stddef.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string to be converted to uppercase
 *
 * Return: a pointer to the string after conversion
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}
		i++;
	}

	return (s);
}
