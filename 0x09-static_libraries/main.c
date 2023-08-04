#include "main.h"
#include <stdio.h>

int main(void)
{
	char s[] = "Hello, World!";
	int len = _strlen(s);
	printf("Length of '%s': %d\n", s, len);

	int x = _abs(-42);
	printf("Absolute value of -42: %d\n", x);

	// Add more test cases as needed...

	return (0);
}

