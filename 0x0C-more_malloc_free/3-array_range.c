#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The start (inclusive) of the range of integers.
 * @max: The end (inclusive) of the range of integers.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;
	array = malloc(length * sizeof(int));
	if (!array)
		return (NULL);

	for (i = 0; i < length; i++, min++)
		array[i] = min;

	return (array);
}
