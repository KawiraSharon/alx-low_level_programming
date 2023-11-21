#include "lists.h"

/**
 * print_listint - function to execute task of printing all elements in list
 * @h: pointer that points to first node in list provided
 * Return: total nodes in list
 */
size_t print_listint(const listint_t *h)
{
	/* declare and initialize vrbl count_node of d_type size_t*/
	size_t count_node = 0;

	while (h)
	{
		printf("%d \n", h->n);
		count_node++;
		h = h->next;
	}

	return (count_node);
}
