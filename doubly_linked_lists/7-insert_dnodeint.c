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
	dlistint_t *currentNode, *previousNode;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	unsigned int count;

	if (!newNode)
		return (NULL);
	
	if (!(*h) && idx)
		return (NULL);

	if (*h)
	{
		previousNode = NULL;
		while (currentNode->prev)
			currentNode = currentNode->prev;
		for (count = 0; currentNode && count < idx; count++)
		{
			previousNode = currentNode;
			currentNode = currentNode->next;
		}
		if (count == idx)
		{
			newNode->n = n;
			newNode->prev = previousNode;
			if (currentNode)
				currentNode->prev = newNode;
			newNode->next = currentNode;
			if (idx)
				previousNode->next = newNode;
			else
				*h = newNode;
			return (newNode);
		}
		return (NULL);
	}
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->n = n;
	*h = newNode;
	return (newNode);
}
