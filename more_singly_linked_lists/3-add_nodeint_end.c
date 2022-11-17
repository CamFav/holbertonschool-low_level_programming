#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list.
 * @head: pointer to head node
 * @n: integer
 *
 * Return: Address of the new element, NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (!(*head))
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
	listint_t *lastNode = *head;

	while (lastNode->next)
		lastNode = lastNode->next;
	lastNode->next = newNode;
	return (newNode);
}
}
