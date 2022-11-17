#include "lists.h"
/**
 * free_list - function that frees a linked list
 * @head: pointer to head node
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *freedom;

	while (head)
	{
		freedom = head->next;
		free (head);
		head = freedom;
	}
}
