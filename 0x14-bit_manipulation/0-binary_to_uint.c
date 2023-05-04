#include "main.h"

/**
 * string_length - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int string_length(const char *str)
{
	int length = 0;

	while (str[length])
	{
		length++;
	}

	return (length);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The input binary string.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;
	int length = string_length(b);

	if (b == NULL)
	{
		return (0);
	}

	for (; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		result = result * 2 + (b[i] - '0');
	}

	return (result);
}
