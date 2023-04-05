#include "main.h"

/**
* _puts_recursion - function for printing a string,after that a new line.
*
* @s: string.
*
* Return: None.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(*s);
	_putchar(s + 1);
}
