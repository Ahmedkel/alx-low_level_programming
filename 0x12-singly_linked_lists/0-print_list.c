#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to head node of list_t list
 *
 * Return: number of nodes in list_t list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
