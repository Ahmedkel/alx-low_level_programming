#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first input number
 * @m: second input number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int num_bits = 0;

	while (xor_result > 0)
	{
		if (xor_result & 1)
			num_bits++;
		xor_result >>= 1;
	}

	return (num_bits);
}
