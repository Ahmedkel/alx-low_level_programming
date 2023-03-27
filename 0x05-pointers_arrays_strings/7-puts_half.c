#include "main.h"

/**
 * puts_half - a function that prints a half of string,
 *	followed by a new line, to stdout.
 *
 * @str: an array of characters;
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int h, n, i;

	i = 0;
	for (h = 0; str[h] != '\0'; h++)
	i++;
	n = (i / 2);
	if ((i % 2) == 1)
	n = ((i + 1) / 2);
	for (h = n; str[h] != '\0'; h++)
	_putchar(str[h]);
	_putchar('\n');
}
