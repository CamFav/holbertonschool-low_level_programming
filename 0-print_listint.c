#include "lists.h"
/**
 * print_listint - function that prints all the elements of a list.
 * @h: pointer to head node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t to_next = 1;

	if (!h)
		return (0);
	if (h->str)
		printf("%d\n", h->len);
	if (h->next)
		to_next = to_next + print_listint(h->next);
	return (to_next);
}
