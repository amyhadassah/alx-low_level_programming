#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the contents of a struct dog
 * @d: pointer to the struct dog to print
 *
 * If an element of d is NULL, the function prints (nil).
 * If d is NULL, the function does nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
