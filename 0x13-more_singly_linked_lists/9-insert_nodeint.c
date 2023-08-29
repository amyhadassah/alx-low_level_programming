#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - Helper function to actually insert the node.
 * @temp: The node after which the new node should be inserted.
 * @n: The data for the new node.
 * Return: The new node or NULL if it failed.
 */
listint_t *insert_node(listint_t *temp, int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Double pointer to the head of the list.
 * @idx: The index at which to insert the new node, starting at 0.
 * @n: The data for the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (insert_node(*head, n));
	}

	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}

	if (temp == NULL)
	{
		return (NULL);
	}

	return (insert_node(temp, n));
}

