#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at
 * a given position in a list
 * @head: pointer to a pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: value of the new node
 * Return: the address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node, *prev_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	prev_node = NULL;
	for (i = 0; i < idx && current_node != NULL; i++)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}

	if (i < idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current_node;

	if (prev_node != NULL)
		prev_node->next = new_node;

	return (new_node);
}
