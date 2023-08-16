#include <stdlib.h>
#include <unistd.h>

/**
 * print_name - prints a name using a given function pointer.
 * @name: name to print
 * @f: function pointer to the printing function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

/* Test function to print name */

/**
 * print - A function that prints a string character by character.
 * @str: The string to be printed.
 * Return: nothing.
 */

void print(char *str)
{
	char *s = str;

	while (*s)

	{
		/* Writing each character to standard output using system call */
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
}

