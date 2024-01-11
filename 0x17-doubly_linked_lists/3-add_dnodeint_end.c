#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of list given
 *
 * @head: list head
 * @n: element value
 * Return: nodeptr element address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *nodeptr;

	nodeptr = malloc(sizeof(dlistint_t));
	if (nodeptr == NULL)
		return (NULL);

	nodeptr->n = n;
	nodeptr->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = nodeptr;
	}
	else
	{
		*head = nodeptr;
	}

	nodeptr->prev = h;

	return (nodeptr);
}
