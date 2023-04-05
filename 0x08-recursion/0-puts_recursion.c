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
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
