#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *func_ptr;

	/* Check if the number of arguments is correct */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/* Convert argument to integer using atoi */
	bytes = atoi(argv[1]);

	/* Check if the number of bytes is negative */
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* Use a character pointer to iterate through each opcode byte of main */
	func_ptr = (char *)&main;

	/* Print the opcodes */
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", func_ptr[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}

