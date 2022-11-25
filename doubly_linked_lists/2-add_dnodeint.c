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
	newNod->n = n;

	if (!head)
	{
		head = tail = newNode;
		head->prev = NULL;
		tail->next = NULL;
	}
	else
	{
		head->prev = newNode;
		newNode->next = head;
		newNode->prev = NULL;
		head = newNode;
	}
	return (0);
}

