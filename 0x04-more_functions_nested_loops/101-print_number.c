#include "main.h"

/**
 * print_number - a function that prints an integer.
 *
 * @n: a digit.
 *
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int dig = n;

	if (n < 0)
	{
		_putchar('-');
		dig = -dig;
	}
	if (n / 10 != 0)
	{
		print_number(dig / 10);
	}
	_putchar((dig % 10) + 48);
}
