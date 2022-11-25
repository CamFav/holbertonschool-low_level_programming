#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a doubly linked list.
 * @h: pointer to head node
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t to_next = 1;

	if (!h)
		return (0);
	if (h->n)
		printf("%d\n", h->n);
	if (h->prev)
		return (0);
	if (h->next)
		to_next = to_next + print_dlistint(h->next);
	return (to_next);
}
