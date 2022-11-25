#include "hash.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 *
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHash;
	hash_table_t **newNode;

	newHash = malloc(sizeof(hash_table_t));
	if (!newHash)
		return (NULL);

	newHash->size = size;
	newNode = malloc(sizeof(hash_table_t *) * size);

	if (!newNode)
	{
		free(newHash);
		return (NULL);
	}
	newHash->array = newNode;

	return (newHash);
}
