#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copy string with setinel character
 * @dest: returnrd string
 * @src: the pointed string
 * Return: charcter of copird string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
