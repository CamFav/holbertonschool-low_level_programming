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
	dlistint_t *currentNode;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (!(*h))
		return (NULL);

	currentNode = *h;

	if (!currentNode && idx)
		return (NULL);

	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (!idx)
	{
		newNode->next = *h;
		*h = newNode;
		return (newNode);
	}
	while (count != idx - 1)
	{
		currentNode = currentNode->next;
		if (!currentNode)
		{
			free(newNode);
			return (NULL);
		}
		count++;
	}
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
