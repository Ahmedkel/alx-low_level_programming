#include "main.h"

/**
* _strspn - a function that gets the length of a prefix substring.
*
* @s: string
* @accept: accepted bytes.
*
* Return: the number of bytes in the initial segment of s.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, count = 0;

	for (; *s; s++)
		for (j = 0; accept[j]; j++)
			if (*s == accept[j])
			{
				count++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (count);
	return (count);
}
