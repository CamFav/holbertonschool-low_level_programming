#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of
 * a doubly linked list.
 * @head: pointer to head node
 * @n: integer
 *
 * Return: EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	newNode = *head;

	if (!newNode)
		return (NULL);

	newNode->next = *head;
	newNode->prev = NULL;
	newNode->n = n;
	*head = newNode;

	return (newNode);
}
