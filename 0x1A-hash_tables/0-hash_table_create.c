#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the array in the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL if error occurs.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **hash_array;
	unsigned long int idx = 0;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_array = malloc(size * sizeof(hash_node_t *));
	if (hash_array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	while (idx < size)
	{
		hash_array[idx] = NULL;
		idx++;
	}

	hash_table->size = size;
	hash_table->array = hash_array;

	return (hash_table);
}

