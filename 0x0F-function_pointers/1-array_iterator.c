#include "function_pointers.h"

/**
 * array_iterator - prints each array elem on a new line
 * @array: pointer to an array of integers
 * @size: size of the array
 * @action: function pointer that takes an
 *          integer argument and returns void
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
