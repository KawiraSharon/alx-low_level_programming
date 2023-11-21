#include "lists.h"

/**
 * free_listint2 - function to free list after which it allocated head to Null
 * @head: points to firt node in list
 */
void free_listint2(listint_t **head)
{
	/*declare temporal pointer to ensure all nodes are freed up*/
	listint_t *temporal;

	if (head == NULL)
		return;

	while (*head)
	{
		temporal = (*head)->next;
		free(*head);
		*head = temporal;
	}

	*head = NULL;
}
