#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: pointer to the first element in the linked list
 *
 * Return: The value of the deleted node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int popped_val;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	popped_val = (*head)->n;
	temp = (*head)->next;

	free(*head);
	*head = temp;

	return (popped_val);
}

