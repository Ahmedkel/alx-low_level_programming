#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j, len;
	char tempC;

	i = 0, j = 0;

	while (s[i])
		i++;
	len = i - 1;
	while (j < i / 2)
	{
		tempC = s[j];
		s[j] = s[len];
		s[len] = tempC;
		len--;
		j++;
	}

}
