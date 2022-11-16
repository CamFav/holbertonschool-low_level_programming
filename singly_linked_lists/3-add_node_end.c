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

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (!head->next)
	{
		head->next = newNode;
		return (0);
	}
	else
	{
		list_t *lastNode = *head;
	
		while (lastNode)
			if (!lastNode->next)
			{
				lastNode->next = newNode;
				break;
			}
		lastNode = lastNode->next;
	};
	return (newNode);
}
