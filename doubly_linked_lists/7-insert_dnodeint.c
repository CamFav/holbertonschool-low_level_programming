#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position.
 * @h: pointer to head node
 * @idx: index where the new node should be added, starting at 0
 * @n: data
 *
 * Return: EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *currentNode, *newNode;
	
	newNode = malloc(sizeof(dlistint_t));

	if (!(*h))
		return (NULL);

	if (!newNode)
		return (NULL);
	currentNode = *h;
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (idx == 0)
	{
		if (!(*h))
			(*h) = newNode;
		else
		{
			newNode->next = *h;
			currentNode->prev = newNode;
			*h = newNode;
		}
		return (newNode);
	}
	for (count = 0; count < (idx - 1); count++)
	{
		currentNode = currentNode->next;
		if (!currentNode)
			return (NULL);
	}
	newNode->n = n;
	newNode->next = currentNode->next;
	newNode->prev = currentNode;

	if (currentNode->next)
		currentNode->next->prev = newNode;
	currentNode->next = newNode;
	return (newNode);
}
