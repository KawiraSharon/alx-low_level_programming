#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes node at given index
 * @head: points to function node
 * @index: index of node we will be deleting
 * Return: 1 on success, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptrnodeCurrent = NULL;
	listint_t *temp = *head;
	size_t s = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (-1);
	}

	while (s < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);

		temp = temp->next;
		s++;
	}

	ptrnodeCurrent = temp->next;
	temp->next = ptrnodeCurrent->next;
	free(ptrnodeCurrent);

	return (1);
}
