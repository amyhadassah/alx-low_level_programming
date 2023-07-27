#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: pointer to the result if the result can be stored in r
 *         0, otherwise
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = strlen(n1) - 1;
	int j = strlen(n2) - 1;
	int k = 0;
	int carry = 0;
	int sum = 0;

	/* Ensure the result can be stored in r */
	if ((size_r <= i) || (size_r <= j) || (size_r <= i + 2) || (size_r <= j + 2))
		return (0);

	/* Calculate sum and handle carry */
	while ((i >= 0) || (j >= 0) || (carry != 0))
	{
		sum = carry;
		if (i >= 0)
		{
			sum += n1[i--] - '0'; /* Convert char to int */
		}
		if (j >= 0)
		{
			sum += n2[j--] - '0'; /* Convert char to int */
		}
		r[k++] = (sum % 10) + '0'; /* Convert int to char and store */
		carry = sum / 10;
	}

	r[k] = '\0';

	/* Reverse the string */
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}

	return (r);
}
