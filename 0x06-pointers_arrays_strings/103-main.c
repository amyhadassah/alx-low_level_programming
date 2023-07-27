#include "main.h"
#include <stdio.h>

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
	char r[100], r2[10], r3[11], *n = "1234567890", *m = "1", *n3 = "999999999", *m3 = "1";
	char *res;

	res = infinite_add(n1, m1, r, 100);
	res == 0 ? printf("Error\n") : printf("%s + %s = %s\n", n1, m1, res);
	res = infinite_add(n2, m2, r, 100);
	res == 0 ? printf("Error\n") : printf("%s + %s = %s\n", n2, m2, res);
	res = infinite_add(n, m, r2, 10);
	res == 0 ? printf("Error\n") : printf("%s + %s = %s\n", n, m, res);
	res = infinite_add(n3, m3, r2, 10);
	res == 0 ? printf("Error\n") : printf("%s + %s = %s\n", n3, m3, res);
	res = infinite_add(n3, m3, r3, 11);
	res == 0 ? printf("Error\n") : printf("%s + %s = %s\n", n3, m3, res);
	return (0);
}

