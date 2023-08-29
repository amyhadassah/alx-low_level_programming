#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the first node of the listint_t list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;  /* Store next node before changing */
		(*head)->next = prev;  /* Change next of current node */
		prev = *head;          /* Move prev to this node */
		*head = next;           /* Move to next node */
	}
	*head = prev;

	return (*head);
}

