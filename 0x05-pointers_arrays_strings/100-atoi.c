#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - convert string to integer
 * @s: the string
 * Return: integer on succeful and 0 on failure
 */
int _atoi(char *s)
{
	unsigned int a = 0;
	int b = 1;

	do {
		if (*s == '-')
			b *= -1;
		else if (*s >= '0' && *s <= '9')
			a = (a * 10) + (*s - '0');
		else if (a > 0)
			break;
	} while (*s++);

	return (a * b);
}
