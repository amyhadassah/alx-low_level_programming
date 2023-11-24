#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted.
 */
void print_binary(unsigned long int n)
{
	int bit_size = sizeof(n) * 8; /* bit size of unsigned long int */
	int flag = 0;  /* to track if we've started displaying meaningful bits */
	int i;  /* Loop index */

	/* Loop from the most significant bit to the least */
	for (i = bit_size - 1; i >= 0; i--)
	{
		/* Shift the ith bit to the rightmost position and bitwise AND with 1 */
		unsigned long int bit = (n >> i) & 1;

		/* Start displaying once the first '1' is encountered */
		if (flag || bit)
		{
			putchar('0' + bit);
			flag = 1;
		}
	}

	/* If n is 0, then display '0' */
	if (!flag)
	{
		putchar('0');
	}
}

/**
 * main - Main function for testing.
 * Return: Always 0 (Success).
 */

#ifdef TEST_MAIN

int main(void)
{
	unsigned long int n = 98;

	print_binary(n);
	putchar('\n');
	return (0);
}

#endif

