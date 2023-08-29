#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n).
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all the data (n) elements of the list.
 *         If the list is empty, return 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;  /* Initialize sum to 0 */

	/* Loop through the list */
	while (head != NULL)
	{
		/* Add current node's data to sum */
		sum += head->n;

		/* Move to the next node */
		head = head->next;
	}

	return (sum);  /* Return the sum */
}

