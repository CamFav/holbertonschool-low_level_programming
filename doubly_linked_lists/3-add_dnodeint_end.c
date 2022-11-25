#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of
 * a doubly linked list.
 * @head: pointer to head node
 * @n: integer
 *
 * Return: EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *lastNode;
	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (!(*head))
	{
		*head = newNode;
		return (newNode);
	}
	lastNode = *head;

	while (lastNode->next)
	{
		lastNode = lastNode->next;
		lastNode->next = newNode;
		newNode->prev = lastNode;
	}
	return (newNode);
}
