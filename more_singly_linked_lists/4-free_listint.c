#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: pointer to head node
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	if (head->next)
		free_listint(head->next);

	free(head);
}
