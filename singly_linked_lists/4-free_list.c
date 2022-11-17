#include "lists.h"
/**
 * free_list - function that frees a linked list
 * @head: pointer to head node
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	if (!head)
		return;
	if (head->next)
		free_list(head->next);

	free(head->str);
	free(head);
}
