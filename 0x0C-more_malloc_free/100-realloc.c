#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the previously allocated memory.
 * @old_size: Size in bytes of the allocated space for ptr.
 * @new_size: New size in bytes for the new memory block.
 *
 * Return: Pointer to the newly allocated memory, or NULL if it fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	/* If new_size == old_size, return the original pointer */
	if (old_size == new_size)
		return (ptr);

	/* If ptr is NULL, the call should be equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	/* If new_size is 0 and ptr isn't NULL, free the block and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* Allocate new memory */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy old content to new space */
	if (new_size > old_size)
		memcpy(new_ptr, ptr, old_size);
	else
		memcpy(new_ptr, ptr, new_size);

	/* Free the old space */
	free(ptr);

	return (new_ptr);
}
