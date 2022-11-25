#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * doubly linked list.
 * @head: pointer to head node
 * @index: index of the node, starting from 0
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int count = 0;

	if (index == 0)
		return (head);

	while (count != index)
	{
		head = head->next;
		count++;
	}
	return (count);
}

