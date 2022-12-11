#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table
 *
 * Return: EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int index = 0;

	if (!ht)
		return;

	while (index < ht->size)
	{
		node = ht->array[index];
		while (node)
		{
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}

