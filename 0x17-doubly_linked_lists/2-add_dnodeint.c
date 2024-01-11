#include "lists.h"

/**
 * add_dnodeint - adds nodeptr node at list start
 *
 * @head: list head
 * @n: element value
 * Return: nodeptr element address; hexa value
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nodeptr;
	dlistint_t *h;

	nodeptr = malloc(sizeof(dlistint_t));
	if (nodeptr == NULL)
		return (NULL);

	nodeptr->n = n;
	nodeptr->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	nodeptr->next = h;

	if (h != NULL)
		h->prev = nodeptr;

	*head = nodeptr;

	return (nodeptr);
}
