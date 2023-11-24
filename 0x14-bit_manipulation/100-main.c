#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Determines the endianness of the system and prints
 *              an appropriate message indicating whether it is little
 *              endian or big endian.
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}

