#include "lists.h"

/**
 * free_listint_safe - Safely frees a listint_t list that might contain loops.
 * @h: A double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *slow, *fast, *prev, *tmp;

	if (!h || !*h)
		return (0);

	slow = *h;
	fast = *h;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = *h;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			prev = NULL;
			while (slow != prev)
			{
				prev = slow;
				slow = slow->next;
				free(prev);
				nodes++;
			}
			*h = NULL;
			return (nodes);
		}
	}

	slow = *h;
	while (slow)
	{
		tmp = slow;
		slow = slow->next;
		free(tmp);
		nodes++;
	}
	*h = NULL;
	return (nodes);
}

