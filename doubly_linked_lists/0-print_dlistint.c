#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of
 * a doubly linked list.
 * @h: pointer to head node
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;

	for (; h; elements++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (elements);
}
