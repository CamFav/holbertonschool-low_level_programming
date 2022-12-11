#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 *
 * Return: EXIT_SUCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *node;
	int number;

	if (!ht)
	{
		return;
	}
	printf("{");

	while (index < ht->size)
	{
		node = ht->array[index];
		if (node)
		{
			while (node)
			{
				if (number == 1)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				number = 1;
			}
		}
		index++;
	}
	printf("}\n");
}
