#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head of the list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *next;

	while (head != NULL)
	{
		temp = head;
		next = temp->next;
		free(temp);
		head = next;
	}
}
