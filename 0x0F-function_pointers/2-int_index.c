#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array pointer
 * @size: size of the input integer array
 * @cmp: pointer to the comparison function
 *
 * Return: index of the first element for which the cmp function does not return 0;
 * If no element matches, returns -1; if size <= 0, returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}
    
	for (int i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
