#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * at index of a listint_t linked list
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	current_node = *head;

	for (i = 0; i < index && current_node != NULL; i++)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (-1);

	prev_node->next = current_node->next;

	free(current_node);

	return (1);
}
