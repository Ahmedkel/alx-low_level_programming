#include "main.h"

/**
 * main - check the code.
 * @c : parameter
 * Return: Return: 1 if char is lowercase, otherwise 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	 return(1);
}
else
{
	return(0);
}
	_putchar('\n');
}
