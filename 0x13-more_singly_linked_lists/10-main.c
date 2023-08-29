#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	int i;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	puts("-----------------");
	delete_nodeint_at_index(&head, 5);
	print_listint(head);
	puts("-----------------");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	puts("-----------------");


	for (i = 0; i < 15; i++)
	{
		delete_nodeint_at_index(&head, 0);
		puts("-----------------");
	}

	print_listint(head);
	return (0);
}

