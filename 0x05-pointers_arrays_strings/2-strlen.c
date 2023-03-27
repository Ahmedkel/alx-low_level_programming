#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: an array of characters;
 *
 * Return: length of the string;
 */
int _strlen(char *s)
{

 int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}

	return (len);
}
