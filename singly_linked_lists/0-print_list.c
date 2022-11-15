#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_list - function that prints all the elements of a list_t list.
 * @list_t: list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *node = head;
	while (!node)
	{
		printf("%d", node->str);
		node = node->next;
	}
}

