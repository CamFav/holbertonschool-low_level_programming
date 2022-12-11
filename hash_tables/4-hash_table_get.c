#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key
 *
 * Return: Element value, or NULL if key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned int index;

	if (!ht)
		return (NULL);

	if (!key)
		return (NULL);
}
