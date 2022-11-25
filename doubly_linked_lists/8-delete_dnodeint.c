#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * of a doubly linked list.
 * @head: pointer to head node
 * @index: index of the node that should be deleted, starting at 0.
 *
 * Return: 1 or -1 if fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currentNode;
	unsigned int count = 0;

	if (!head || !(head))
		return (-1);
	currentNode = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(currentNode);
		return (1);
	}
	while (currentNode->next)
	{
		if (count == index)
		{
			currentNode->next->prev = currentNode->prev;
			currentNode->prev->next = temp->next;
			free(currentNode);
			return (1);
		}
		currentNode = currentNode->next;
		count++;
	}
	return (-1);
}


