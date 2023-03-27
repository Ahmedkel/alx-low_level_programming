#include "main.h"
/**
 * puts2 - Entry Function
 * @str: char
 */
void puts2(char *str)
{
	int c = 0;

	while (*str != '\0')
	{
		if (c % 2 == 0)
			_putchar(*str);
		str += 1;
		c++;
	}
	_putchar('\n');
}
