#include "lists.h"

/**
 * free_listint_safe - frees list listint_t
 * @h: points to firat node in the list
 * Return: total elements freed in list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t list_len = 0;
	int diffrnc_no;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diffrnc_no = *h - (*h)->next;
		if (diffrnc_no > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			list_len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			list_len++;
			break;
		}
	}

	*h = NULL;

	return (list_len);
}
