#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n) of a
 * doubly linked list.
 * @head: pointer to head node
 *
 * Return: sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (!head)
		return (0);

	while (head)
	{
		i = i + head->n;
		head = head->next;
	}
	return (i);
}
