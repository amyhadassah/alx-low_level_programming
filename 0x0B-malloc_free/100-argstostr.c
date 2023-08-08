#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: Argument count.
 * @av: Array of argument strings.
 *
 * Description: If ac == 0, return NULL. If av == NULL, return NULL.
 * Otherwise, concatenate all arguments into a new string.
 *
 * Return: Pointer to the new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length required for the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;  /* For the newline character */
	}

	/* Allocate memory */
	str = malloc(sizeof(char) * (len + 1));  /* +1 for the null terminator */
	if (!str)
		return (NULL);

	/* Copy each argument to the new string followed by a newline */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
