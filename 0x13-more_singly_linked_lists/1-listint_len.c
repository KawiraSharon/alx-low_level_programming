#include "lists.h"

/**
 * listint_len - function to calculate no of elements or nodes in list
 * @h: pointer pointing to first node in list
 * Return: total elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t ele_total = 0;

	while (h)
	{
		ele_total++;
		h = h->next;
	}
	return (ele_total);
}
