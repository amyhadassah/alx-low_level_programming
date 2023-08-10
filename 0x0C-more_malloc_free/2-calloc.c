#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets memory to zero.
 * @nmemb: Number of members of the array.
 * @size: Size in bytes of each member.
 *
 * Return: Pointer to the allocated memory or NULL if fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	result = malloc(total_size);
	if (!result)
		return (NULL);

	for (i = 0; i < total_size; i++)
		result[i] = 0;

	return ((void *)result);
}
