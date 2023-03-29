#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: pointer of destination;
 * @src: pointer of string that you want to concatenate;
 *
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
