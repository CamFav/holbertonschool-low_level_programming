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

	list_t *lastNode = *head;

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (!head)
	{
		*head = newNode;
		return;
	}

	while (!lastNode->next)
		lastNode = lastNode->next;
	lastNode->next = newNode;
	return;
}
