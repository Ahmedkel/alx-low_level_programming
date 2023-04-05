#include "main.h"

/**
* _strlen_recursion - returns the length of a string.
*
* @s: pointer to string.
*
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
	return (*s == '\0' ? 0 : _strlen_recursion(s + 1) + 1);
}
