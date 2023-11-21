#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer to first node
 * @index: node index being returned
 * Return: pointer to node being returned
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t m = 0;
	listint_t *temp = head;

	while (temp && m < index)
	{
		temp = temp->next;
		m++;
	}
	return (temp ? temp : NULL);
}
