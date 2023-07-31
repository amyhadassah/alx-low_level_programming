#include "main.h"

#define NULL ((void*)0)

/**
 * set_string - Sets the value of a pointer to a char
 * @s: The pointer to a pointer to a char that we want to set
 * @to: The string we want to set it to
 *
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	if(s != NULL)
	{
		*s = to;
	}
}
