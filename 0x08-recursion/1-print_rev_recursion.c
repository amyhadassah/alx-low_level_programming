#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * The function uses recursion to move to the end of the string, then it
 * prints the characters as the recursive calls are unwound.
 * @s: string to be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

