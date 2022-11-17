#include "lists.h"
/**
 * free_list - function that frees a linked list
 * @head: pointer to head node
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *freedom, *prison;
	freedom = head;
	while (freedom)
	{
		prison = freedom->next;
		free(freedom);
		freedom = prison;
	}
	head = NULL;
	return (0);
}
