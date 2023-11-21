#include "lists.h"

/**
 * reverse_listint - function to reverse a listint_t linked list
 * @head: pointer to first node
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptrNodeNext = NULL;
	listint_t *ptrNodePrev = NULL;

	while (*head)
	{
		ptrNodeNext = (*head)->next;
		(*head)->next = ptrNodePrev;
		ptrNodePrev = *head;
		*head = ptrNodeNext;
	}
	*head = ptrNodePrev;
	return (*head);
}
