#include "lists.h"

/**
 * list_len - function to return total elements in list_t
 * @h: list of elements in list_t
 * Return: no. of elements, nodes
 */
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
