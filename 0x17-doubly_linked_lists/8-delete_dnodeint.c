#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position
 * @head: Head of the linked list
 * @index: Index of the list where the node should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *temp;
	unsigned int post;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	current = *head;
	post = 0;
	if (index == 0)
	{
		*head = (*head)->next;
	}
	else
	{
		while (post < (index - 1))
		{
			if (current == NULL)
				return (-1);
			current = current->next;
			post++;
		}
		temp = current;
		current = current->next;
		temp->next = current == NULL ? NULL : current->next;
	}
	free(current);
	return (1);
}
