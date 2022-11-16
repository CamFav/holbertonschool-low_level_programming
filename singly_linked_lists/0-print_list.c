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
	if (h->str == NULL)
		printf("[0] (nil)\n");
	return (1);
}
