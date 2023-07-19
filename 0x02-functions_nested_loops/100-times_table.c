#include "main.h"

/**
 * print_number - prints an integer character by character
 * @n: the integer to print
 *
 * Return: nothing
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n / 10)
{
print_number(n / 10);
}

_putchar((n % 10) + '0');
}

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: times table to print
 *
 * Return: nothing
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;

for (int i = 0; i <= 10; ++i)
{
print_number(n);
_putchar(' ');
_putchar('x');
_putchar(' ');
print_number(i);
_putchar(' ');
_putchar('=');
_putchar(' ');
print_number(n * i);
_putchar('\n');
}
}

