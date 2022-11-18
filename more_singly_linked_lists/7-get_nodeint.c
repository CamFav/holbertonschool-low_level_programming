#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to head node
 * @index: starting at 0
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int count = 0;

	while (count != index)
	{
		head = head->next;
		if (head)
			return (NULL);
		count++;
	}
	return(head);
}
