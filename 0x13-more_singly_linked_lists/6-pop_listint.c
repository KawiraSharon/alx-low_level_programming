#include "lists.h"

/**
 * pop_listint - delete head node of a list and return data in the head node
 * @head: pointer to the first node in the list
 * Return: data in head node, 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int h_node_data = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	h_node_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (h_node_data);
}
