#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to head node
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 1;

	if (!h)
		return (0);
	if (h->next)
		number += listint_len(h->next);
	return (number);
}
