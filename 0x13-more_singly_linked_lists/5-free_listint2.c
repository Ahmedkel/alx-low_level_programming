#include "lists.h"

/**
 * free_listint2 - frees a linked list elements
 *
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *tempv;

	if (head == NULL)
		return;

	while (*head)
	{
		tempv = (*head)->next;
		free(*head);
		*head = tempv;
	}

	*head = NULL;
}
