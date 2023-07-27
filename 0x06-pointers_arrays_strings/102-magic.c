#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 2) = 98; /* Add this line to set a[2] to 98 */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
