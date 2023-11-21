#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given posn
 * @head: pointer to the first node
 * @idx: index where new node should be added
 * @n: data of new node, integer
 * Return: address of new node, NULL if new node insertion fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t x = 0;
	listint_t *ptrNewNode, *temp = *head;

	ptrNewNode = malloc(sizeof(listint_t));
	if (!ptrNewNode)
		return (NULL);

	ptrNewNode->n = n;
	ptrNewNode->next = NULL;

	if (!*head && !idx)
	{
		*head = ptrNewNode;
		return (ptrNewNode);
	}

	else if (!*head && idx)
		return (NULL);

	else if (!idx)
	{
		ptrNewNode->next = temp;
		*head = ptrNewNode;
		return (ptrNewNode);
	}

	while (x < (idx - 1))
	{
		if (temp == NULL || temp->next == NULL)
		{
			free(ptrNewNode);
			return (NULL);
		}
		temp = temp->next;
		x++;
	}
	ptrNewNode->next = temp->next;
	temp->next = ptrNewNode;

	return (ptrNewNode);
}
