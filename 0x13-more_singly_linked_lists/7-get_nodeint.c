#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node of a listint_t linked list.
 *         If the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	/* Loop through the linked list */
	while (head != NULL)
	{
		/* If count matches index, return current node */
		if (count == index)
		{
			return (head);
		}

		/* Increment count and move to the next node */
		count++;
		head = head->next;
	}

	/* If the loop completes, the node doesn't exist */
	return (NULL);
}
