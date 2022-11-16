#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list.
 * @str: string
 *
 * Return: address of new element, or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);
}
