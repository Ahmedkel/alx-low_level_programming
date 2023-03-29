#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 *
 * @s: a string.
 *
 * Return: s;
 */
char *rot13(char *s)
{
	int i, j;
	char *abc = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *r13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i]; i++)
		for (j = 0; abc[j]; j++)
			if (s[i] == abc[j])
			{
				s[i] = r13[j];
				break;
			}
	return (s);
}
