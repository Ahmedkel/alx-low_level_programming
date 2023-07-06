#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table, or NULL if something
 *         went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i;

	/* Allocate memory for the hash table structure */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/* Set the size of the hash table */
	hash_table->size = size;

	/* Allocate memory for the array of pointers to hash_node_t */
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
