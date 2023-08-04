#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: Array of character pointers listing all the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_arguments; /* Declaration moved to the start of the block */

	(void)argv; /* To avoid unused parameter error */

	num_arguments = argc - 1; /* This is now an assignment, not a declaration */
	printf("%d\n", num_arguments);

	return (0);
}
