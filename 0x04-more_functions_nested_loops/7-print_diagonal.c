#include "main.h"

/**
  * print_diagonal - Draws a diagonal lines according parameter
  * @n: The number of times to print diagonal lines
  * Return: empty
  */

void print_diagonal(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n - 1; x++)
		{
			_putchar(" ");
		}
		_putchar('\\');
		_putchar('\n');
	}
}
