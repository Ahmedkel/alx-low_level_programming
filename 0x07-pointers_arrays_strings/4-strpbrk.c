#include "main.h"

/**
* _strpbrk - a function that searches a string for any of a set of bytes.
*
* @s: string
* @accept: accepted bytes.
*
* Return: a pointer to the byte in s that matches one of the bytes in accept.
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int j;

	for (; *s; s++)
		for (j = 0; accept[j]; j++)
			if (*s == accept[j])
			{
				return (s);
			}
	return ('\0');
}
