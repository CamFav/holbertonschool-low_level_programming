#include "lists.h"
/**
 * free_dlistint - function that frees a doubly linked list
 * @head: pointer to head node
 *
 * Return: EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freeNode;

	while (head)
	{
		freeNode = head;
		head = head->next;
		freeNode->prev = NULL;
		freeNode->next = NULL;
		free(freeNode);
	}
}
