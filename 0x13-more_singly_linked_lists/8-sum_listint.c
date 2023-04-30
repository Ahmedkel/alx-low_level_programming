#include "lists.h"

/**
 * sum_listint - returns the sum of all
 * the data (n) of a listint_t linked list.
 *
 * @head: pointer to head node of linked list
 *
 * Return: sum of all data in linked list
 */

int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
