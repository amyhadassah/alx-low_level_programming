#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes to take from s2.
 *
 * Return: Pointer to the newly allocated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len_s1 = 0, len_s2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;

	while (s2[len_s2])
		len_s2++;

	if (n >= len_s2)
		n = len_s2;

	result = malloc(len_s1 + n + 1);
	if (!result)
		return (NULL);

	for (i = 0; s1[i]; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		result[i] = s2[j];

	result[i] = '\0';

	return (result);
}
