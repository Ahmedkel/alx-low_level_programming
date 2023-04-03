#include "main.h"

/**
* _memset - a function that copies memory area.
*
* @s: pointer
* @b: character
* @n: number of bytes
*
* Return: pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
