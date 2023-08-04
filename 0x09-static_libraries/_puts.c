#include "main.h"

/**
 * _puts - Prints a string, followed by a new line
 * @s: The string to be printed
 */
void _puts(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
