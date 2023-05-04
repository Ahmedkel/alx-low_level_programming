#include "maih.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number whose bit needs to be cleared
 * @index: index of the bit to be cleared
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	unsigned long int mask = 1 << index;

	*n &= ~mask;

	return (1);
}
