#include <stdio.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to use for comparison.
 * Return: The index of the first element for which the cmp function
 *         does not return 0, or -1 if no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

/**
 * is_even - Check if a number is even.
 * @num: The number to check.
 * Return: 1 if even, 0 otherwise.
 */
int is_even(int num)
{
	return (num % 2 == 0);
}

/**
 * main - Main function to demonstrate the int_index functionality.
 * Return: 0 for success.
 */
int main(void)
{
	int numbers[] = {1, 3, 5, 7, 8, 10};
	int size = sizeof(numbers) / sizeof(int);
	int index;

	/* Find the index of the first even number */

	index = int_index(numbers, size, is_even);
	if (index != -1)
	{
		printf("The first even number is at index: %d\n", index);
	}
	else
	{
		printf("No even numbers found.\n");
	}

	return (0);
}
