#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets its head to NULL.
 * @head: Double pointer to the head of the listint_t list.
 *
 * Return: (void)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)  /* Check if the double pointer is NULL */
	{
		return;
	}

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;  /* Set the head to NULL after freeing the list */
}

