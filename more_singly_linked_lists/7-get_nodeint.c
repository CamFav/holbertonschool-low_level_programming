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
	listint_t *newNode = malloc(sizeof(listint_t));

	newNode->n = data;
	newNode->next = (*head);
	(*head) = newNode;

	listint_t *nth = head;

	int count = 0;

	while (nth)
	{
		if (count == index)
			return (nth->data);
		count++;
		nth = nth->next;
	}
	assert(0);
}
