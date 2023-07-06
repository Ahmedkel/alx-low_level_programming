#include "hash_tables.h"
/**
 * hash_djb2 - Implements the djb2 hash algorithm.
 * @str: The string to calculate the hash value for.
 *
 * Return: The calculated hash value as an unsigned long integer.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
