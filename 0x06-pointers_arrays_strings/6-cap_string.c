#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 *
 * @s: a string.
 *
 * Return: s;
 */
char *cap_string(char *s)
{
	int i, j;
	char *sym = ",;.!?\"(){} \t\n";

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			for (j = 0; sym[j]; j++)
				if (s[i - 1] == sym[j] || i == 0)
				{
					s[i] -= 32;
					break;
				}
	}
	return (s);
}
