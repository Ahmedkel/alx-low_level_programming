#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with char c.
 * @size: the size of the memory to allocate.
 * @c: the char to intialize the array with.
 * Return: the array created.
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i;
	
	if(!i || !arr)
	{
	return(NULL);
	}
	i = 0;
	while(i < size)
	{
		size[i] = c;
		i++;
	}
	return (arr);
}
