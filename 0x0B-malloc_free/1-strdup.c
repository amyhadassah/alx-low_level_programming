#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: pointer to the duplicated string or NULL if it fails
 */
char *_strdup(char *str)
{
	char *duplicated;
	int i, length = 0;

	/* Check for NULL input */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[length])
		length++;

	/* Allocate memory for duplicated string */
	duplicated = (char *) malloc((length + 1) * sizeof(char));

	/* Check if memory allocation was successful */
	if (duplicated == NULL)
		return (NULL);

	/* Copy the string */
	for (i = 0; i < length; i++)
		duplicated[i] = str[i];

	duplicated[i] = '\0';

	return (duplicated);
}

