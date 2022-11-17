#include "lists.h"
/**
 * free_listint2 - function that frees a list pointing to NULL
 * @head: pointer to head node
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *freedom;

	if (!head)
		return;

	freedom = *head;

	if (freedom->next)
		free_listint2(freedom->next);
}
