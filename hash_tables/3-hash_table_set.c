#include "hash_table.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: target
 * @key: key, cannot be an empty string.
 * @value: value associated to the key, must be dupliacated and can be an
 * empty string. 
 *
 * Return: 1 or 0 if fail.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newHash = NULL;
	hash_node_t *currentHash = NULL;
	unsigned long int count = 0;

	if (!ht || !key || !value)
		return (0);
	if (ht)
	{
		count = key_index((unsigned char *)key, ht->size);

		currentHash = ht->array[count];
		while (currentHash)
		{
			if (strcmp(currentHash->key, key) == 0)
			{
				free(currentHash->value);
				currentHash->value = strdup(value);
				return (1);
			}
			currentHash = currentHash->next;
		}
		newHash = malloc(sizeof(hash_node_t));
		if (!newHash)
			return (0);
		newHash->key = strdup(key);
		newHash->value = strdup(value);
		newHash->next = ht->array[count];
		ht->array[count] = newHash;
	
		return (1);
	}
	return (0)
}
