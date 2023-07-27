#include "main.h"
#include <stddef.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to be capitalized
 *
 * Return: a pointer to the string after capitalization
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Capitalize the first word */
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - ('a' - 'A');
	}

	while (s[i] != '\0')
	{
		/* Check each character for a separator */
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] == separators[j])
			{
				/* If the next character is a lowercase letter, capitalize it */
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - ('a' - 'A');
				}
			}
		}
		i++;
	}

	return (s);
}
