#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *node;
	int pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];

		while (node != NULL)
		{
			if (!pair)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			pair = 0;

			node = node->next;
		}
	}
	printf("}\n");
}
