#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 * Return: 10 times
 */

void more_numbers(void)
{
	int i, y;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}

			_putchar((y % 10) + '0');
		}

		_putchar('\n');
	}
}
