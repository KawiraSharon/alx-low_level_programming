#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts newptr node at given position
 *
 * @h: list head
 * @idx: new node index
 * @n: new node value
 * Return: new node address; NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newptr;
	dlistint_t *headPtr;
	unsigned int i;

	newptr = NULL;
	if (idx == 0)
		newptr = add_dnodeint(h, n);
	else
	{
		headPtr = *h;
		i = 1;
		if (headPtr != NULL)
			while (headPtr->prev != NULL)
				headPtr = headPtr->prev;
		while (headPtr != NULL)
		{
			if (i == idx)
			{
				if (headPtr->next == NULL)
					newptr = add_dnodeint_end(h, n);
				else
				{
					newptr = malloc(sizeof(dlistint_t));
					if (newptr != NULL)
					{
						newptr->n = n;
						newptr->next = headPtr->next;
						newptr->prev = headPtr;
						headPtr->next->prev = newptr;
						headPtr->next = newptr;
					}
				}
				break;
			}
			headPtr = headPtr->next;
			i++;
		}
	}

	return (newptr);
}
