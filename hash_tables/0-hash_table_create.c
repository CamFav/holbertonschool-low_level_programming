#include "hash.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 *
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int count = 0;
	hash_table_t *newHash = NULL;

	newHash = malloc(sizeof(hash_table_t));
	if (!newHash)
		return (NULL);

	newHash->array = malloc(sizeof(hash_node_t *) * size);

	if (!newHash->array)
	{
		free(newHash);
		newHash = NULL;
		return (NULL);
	}
	while (count < size)
	{
		newHash->array[count] = NULL;
		count++;
	}
	newHash->size = size;

	return (newHash);
}
