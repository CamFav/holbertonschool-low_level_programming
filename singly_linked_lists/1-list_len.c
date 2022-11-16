#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to first node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t number = 1;

	if (!h)
		return (0);
	
	if (h->next)
		number = number + list_len(h->next);
	return (number);
}
