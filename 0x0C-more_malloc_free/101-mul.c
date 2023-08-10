#include <stdio.h>
#include <stdlib.h>

int is_digit(char *s)
{
	int i = 0;

	if (s[0] == '+')  /* Allow numbers to optionally start with a '+' */
		i = 1;

	for (; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

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
