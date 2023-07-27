#include "main.h"
#include <stdio.h>

void execute_add(char *n, char *m, char *r, int size)
{
	char *res;
	res = infinite_add(n, m, r, size);
	if (res == 0)
		printf("Error\n");
	else
		printf("%s + %s = %s\n", n, m, res);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *n1 = "1234567892434574367823574575678477685785645685876876774586734";
	char *n2 = "734563456453743756756784458";
	char *m1 = "9034790663470697234682914569346259634958693246597324659762347";
	char *m2 = "956349265983465962349569346";
	char r[100], r2[10], r3[11];
	char *n = "1234567890";
	char *m = "1";
	char *n3 = "999999999";
	char *m3 = "1";

	execute_add(n1, m1, r, 100);
	execute_add(n2, m2, r, 100);
	execute_add(n, m, r2, 10);
	execute_add(n3, m3, r2, 10);
	execute_add(n3, m3, r3, 11);

	return (0);
}

