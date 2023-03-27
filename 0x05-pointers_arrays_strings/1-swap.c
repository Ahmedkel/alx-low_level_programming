#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: 1st integer;
 * @b: 2nd integer;
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
