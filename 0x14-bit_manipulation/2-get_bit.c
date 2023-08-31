#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long integer containing the bit.
 * @index: The index, starting from 0, of the bit to get.
 *
 * Return: The value of the bit at index `index` or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	/* Check if index is larger than the maximum number of bits */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Create a mask by shifting 1 to the specified index */
	mask = 1UL << index;

	/* Use bitwise AND to isolate the desired bit, then shift it */
	return ((n & mask) >> index);
}

