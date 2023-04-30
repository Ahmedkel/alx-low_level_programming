#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n)
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all the data (n) of the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
