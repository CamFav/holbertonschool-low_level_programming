#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * and returns the head node's data.
 * @head: pointer to head node
 *
 * Return: data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *newNode;
	int n;

	if (!head)
		return (0);

	n = pop_listint(*head);

	newNode = *head;

	*head = newNode->next;
	free(newNode);
	return (n);
}
