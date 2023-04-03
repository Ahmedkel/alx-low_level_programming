#include "main.h"

/**
* _strstr - a function that locates a substring.
*
* @haystack: string
* @needle: string
*
* Return: a pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{

		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
