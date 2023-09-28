#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars (the binary number).
 *
 * Return: The converted number, or 0 if b is NULL
 *         or there is one or more chars in b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		/* Check for valid binary digit */
		if (*b != '0' && *b != '1')
			return (0);

		/* Shift previous number left by 1 and add new digit */
		num <<= 1;
		num |= (*b - '0');

		/* Move to the next digit */
		b++;
	}

	return (num);
}
