#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - check if a string only contains digits
 * @s: string to check
 * Return: 1 if true, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - multiplies two positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	long num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);

	printf("%ld\n", num1 * num2);
	return (0);
}
