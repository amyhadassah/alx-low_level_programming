#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head, *loop_start = NULL;
	const listint_t *current = head;
	size_t count = 0;

	/* Detect loop using Floyd's cycle-finding algorithm */
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop_start = slow;
			break;
		}
	}

	/* Print list */
	while (current != NULL)
	{
		if (current == loop_start && count != 0)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			return (count);
		}

		if (current == NULL)
		{
			exit(98);
		}

		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	}
	return (count);
}

