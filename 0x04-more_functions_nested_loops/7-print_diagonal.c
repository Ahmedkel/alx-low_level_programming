#include "main.h"
/**
 * print_diagonal - Entry Function
 * @n: integer
 */
void print_diagonal(int n)
{
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
