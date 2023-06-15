#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data (n) in a
 *                doubly linked list.
 * @head: pointer to the head of the doubly linked list
 *
 * Return: sum of all the data (n) in the doubly linked list
 *         0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	/* Check if the list is empty */
	if (head == NULL)
		return (0);

	current = head;

	/* Traverse the list and add up the value of each node */
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	/* Return the sum of all the nodes */
	return (sum);
}
