#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_list - function that prints all the elements of a list_t list.
 * @list_t: list
 * @h: pointer to first node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t to_next = 1;

	if (!h)
		return (0);

	if (!h->str)
		printf("[0] (nil)\n");
	printf("[%d] %s\n", h->len, h->str);

	if (h->next)
		to_next = to_next + print_list(h->next);
	return (to_next);
}
