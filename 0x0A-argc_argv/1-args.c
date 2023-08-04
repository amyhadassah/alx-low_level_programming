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
	int num_arguments; /* Moved this declaration to the start of the block */

	(void)argv; /* This line is to avoid the unused parameter error */

	num_arguments = argc - 1; /* Now this is not a declaration, but an assignment */
	printf("%d\n", num_arguments);

	return (0);
}
