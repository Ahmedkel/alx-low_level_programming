#include "main.h"

/**
 * _isdigit - Check if the char is number.
 *
 * @c: ASCII value.
 *
 * Return: 1 if the char is number otherwise return 0;
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
