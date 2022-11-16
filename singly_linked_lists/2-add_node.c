#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: pointer to first node
 * @str: strings
 *
 * Return: address of new element, or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	unsigned int i = 0;

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str); 
	newNode->next = *head;
	newNode->len = i;
	*head = newNode;

	while (str[i])
		i++;
	return (newNode);
}
