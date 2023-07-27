#include "main.h"
#include <stdio.h>

void perform_calc(char *n, char *m, char *r, int size)
{
	char *res;

	res = infinite_add(n, m, r, size);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char part1[] = "1234567892434574367823574575678477685785645685876876774586734";
	char part2[] = "734563456453743756756784458";
	char part3[] = "9034790663470697234682914569346259634958693246597324659762347";
	char part4[] = "956349265983465962349569346";
	char r[100];
	char r2[10];
	char r3[11];

	perform_calc(part1, part3, r, 100);
	perform_calc(part2, part4, r, 100);
	perform_calc("1234567890", "1", r2, 10);
	perform_calc("999999999", "1", r2, 10);
	perform_calc("999999999", "1", r3, 11);

	return (0);
}
