#include <stddef.h>  /* For size_t */

/**
 * array_iterator - Executes a function given as a parameter
 *                  on each element of an array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @action: A pointer to the function to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
