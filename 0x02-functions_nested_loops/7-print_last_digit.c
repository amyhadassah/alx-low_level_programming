#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer to compute
 * Return: Absolute value of the integer
 */
int _abs(int n)
{
if (n < 0)
return (-n);
else
return (n);
}

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be checked
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
int last_digit = _abs(n % 10);
_putchar(last_digit + '0');

return (last_digit);
}


