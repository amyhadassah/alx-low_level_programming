#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list and
 *               returns the head node's data (n).
 * @head: Double pointer to the head of the list.
 *
 * Return: The data (n) of the head node. If the list is empty, return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	/* Check if the list is empty */
	if (*head == NULL)
	{
		return (0);
	}

	/* Temporarily store the address of the node to be deleted */
	temp = *head;

	/* Save the data to be returned */
	data = temp->n;

	/* Point head to the next node */
	*head = temp->next;

	/* Free the old head node */
	free(temp);

	return (data);
}

