#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Amount of memory to allocate.
 *
 * Return: Pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
	{
		exit(98);
	}

	return (ptr);
}
