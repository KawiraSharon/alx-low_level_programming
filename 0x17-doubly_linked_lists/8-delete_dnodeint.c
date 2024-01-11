#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at idx of list given
 *
 * @head: list head
 * @index: new node idx
 * Return: 1 on true or success, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1Ptr;
	dlistint_t *h2Ptr;
	unsigned int j;

	h1Ptr = *head;

	if (h1Ptr != NULL)
		while (h1Ptr->prev != NULL)
			h1Ptr = h1Ptr->prev;

	j = 0;

	while (h1Ptr != NULL)
	{
		if (j == index)
		{
			if (j == 0)
			{
				*head = h1Ptr->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2Ptr->next = h1Ptr->next;

				if (h1Ptr->next != NULL)
					h1Ptr->next->prev = h2Ptr;
			}

			free(h1Ptr);
			return (1);
		}
		h2Ptr = h1Ptr;
		h1Ptr = h1Ptr->next;
		j++;
	}

	return (-1);
}
