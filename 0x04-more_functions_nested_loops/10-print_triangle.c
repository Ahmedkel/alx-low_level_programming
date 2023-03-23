#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: the size of the triangle
 * Return: Nothing.
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int count, space;


		for (count = 1; count <= size; count++)
		{
			for (space = size; space > count; space--)
				_putchar(' ');
			for (space = 0; space < count; space++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
