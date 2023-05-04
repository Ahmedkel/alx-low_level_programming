#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: pointer to the number to modify
 * @index: index starting from 0 of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= 64)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}
