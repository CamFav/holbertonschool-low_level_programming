#include "lists.h"
/**
 * sum_listint - function that returns
 * the sum of all the data (n) of a linked list.
 * @head: pointer to head node
 *
 * Return: Sum of (n)
 */
int sum_listint(listint_t *head)
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
