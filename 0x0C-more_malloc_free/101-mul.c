#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string s is a digit
 * @s: the string to check
 * Return: 1 if s is a digit, 0 otherwise
 */
int is_digit(char *s)
{
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 if successful, 98 otherwise
 */
int main(int argc, char *argv[])
{
	long num1, num2, product;

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

	product = num1 * num2;
	printf("%ld\n", product);

	return (0);
}
