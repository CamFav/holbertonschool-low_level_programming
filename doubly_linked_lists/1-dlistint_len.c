#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * in a doubly linked list.
 * @h: pointer to head node
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
