#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char leet[] = "aAeEoOtTlL";
	char num[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (s[i] == leet[j])
			{
				s[i] = num[j / 2];
				break;
			}
		}
	}

	return (s);
}
