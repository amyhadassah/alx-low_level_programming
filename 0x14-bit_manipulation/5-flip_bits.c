#include <stdio.h>

/**
 *flip_bits - Returns the number of bits that need to be flipped
 * to get from one number to another.
 *
 * @n: The first number to compare
 * @m: The second number to compare
 *
 * Return: The number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	/* Iterate through each bit of n and m */
	while (n || m)
	{
		/* XOR bits to check if they are different, add to count */
		count += (n & 1) ^ (m & 1);

		/* Shift numbers right by 1 to compare next least significant bit */
		n >>= 1;
		m >>= 1;
	}

	return (count);
}

