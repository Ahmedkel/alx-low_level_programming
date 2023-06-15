#include "lists.h"

/**
 * free_dlistint - function that helps free linked list
 * @head: pointer to the first of the element of list
 */
void free_dlistint(dlistint_t *head)
{
	while (!head)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
