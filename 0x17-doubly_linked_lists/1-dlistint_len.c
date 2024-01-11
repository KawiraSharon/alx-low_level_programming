#include "lists.h"

/**
 * dlistint_len - returns element no. in list given
 *
 * @h: list head
 * Return: node no.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int countEr;

	countEr = 0;

	if (h == NULL)
		return (countEr);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		countEr++;
		h = h->next;
	}

	return (countEr);
}
