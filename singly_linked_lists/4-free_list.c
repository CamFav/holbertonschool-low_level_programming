#include "lists.h"
/**
 * free_list - function that frees a linked list
 * @head: pointer to head node
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
		

