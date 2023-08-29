#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specific index.
 * @head: A pointer to the pointer to the first node of the listint_t list.
 * @index: The index of the node that should be deleted, starts at 0.
 *
 * Description: This function deletes a node at a specific index in a
 * listint_t linked list. It returns 1 if it succeeded, or -1 if it failed.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current_node = *head;

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	for (i = 0; current_node != NULL && i < index; i++)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL)
	{
		return (-1);
	}

	prev_node->next = current_node->next;
	free(current_node);
	return (1);
}

