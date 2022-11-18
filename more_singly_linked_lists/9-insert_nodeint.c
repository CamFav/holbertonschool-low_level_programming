#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position
 * @head: pointer to head node
 * @idx: index of the list where the new node should be added.
 * Starts at 0.
 * @n: data
 *
 * Return: Index.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currentNode;
	listint_t *newNode = malloc(sizeof(listint_t));
	unsigned int count = 0;

	if (!head)
		return (NULL);

	currentNode = *head;

	if (!currentNode && idx)
		return (NULL);

	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (!idx)
	{
		newNode->next = *head;
		*head = newNode;
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
