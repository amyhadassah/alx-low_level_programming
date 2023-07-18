#include "main.h"

/**
 * main - Entry point, prints "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (0);

}
