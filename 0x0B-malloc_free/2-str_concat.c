#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer to the new string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int i, j, length_s1 = 0, length_s2 = 0;

	/* If NULL is passed, treat it as an empty string */
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	/* Calculate the length of the strings */
	while (s1[length_s1])
		length_s1++;
	while (s2[length_s2])
		length_s2++;

	/* Allocate memory for concatenated string */
	concatenated = (char *) malloc((length_s1 + length_s2 + 1) * sizeof(char));

	/* Check if memory allocation was successful */
	if (concatenated == NULL)
		return (NULL);

	/* Copy the first string */
	for (i = 0; i < length_s1; i++)
		concatenated[i] = s1[i];

	/* Copy the second string */
	for (j = 0; j < length_s2; j++, i++)
		concatenated[i] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}

