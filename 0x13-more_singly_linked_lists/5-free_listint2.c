#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: Pointer to the head of the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}

	*head = NULL;
}
