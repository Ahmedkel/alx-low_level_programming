#include "main.h"

/**
* _strchr - a function that locates a character in a string.
*
* @s: string
* @c: chracter
*
* Return: pointer to destination.
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		if (s[i] == c)
			return (s + i);
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
