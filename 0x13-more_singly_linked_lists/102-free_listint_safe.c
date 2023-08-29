#include "lists.h"

/**
 * free_listint_safe - Safely frees a listint_t list.
 * @h: A double pointer to the head of the list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *slow = *h, *fast = *h, *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	/* Detect loop using tortoise and hare algorithm */
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)  // Loop detected
		{
			slow = *h;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			/* Break the loop */
			fast->next = NULL;
		}
	}

	/* Free the list */
	while (*h)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		count++;
	}

	*h = NULL;
	return (count);
}

