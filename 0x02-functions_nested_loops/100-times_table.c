#include "main.h"

/**
 * print_times_table - prints the n times table,
 *			starting with 0
 * @s: range.
 *
 * Return: Nothing.
 */
void print_times_table(int s)
{
	int m, n, o;

	if (s >= 0 && s <= 15)
	{
		for (m = 0; m <= s; m++)
		{
		_putchar('0');
		for (n = 1; n <= s; n++)
		{
			_putchar(',');
			_putchar(' ');
			o = m * n;
			if (o <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + o);
			}
			else if (o <= 99)
			{
				_putchar(' ');
				_putchar('0' + (o / 10));
				_putchar('0' + (o % 10));
			}
			else
			{
				_putchar('0' + (o / 100));
				_putchar('0' + ((o / 10) % 10));
				_putchar('0' + (o % 10));
			}
		}
		_putchar('\n');
		}
	}

}
