#include "lists.h"

/**
 * sum_listint - function returns sum of n(data) in linked list
 * @head: pointer to first node in singly linked list
 * Return: sum of all data, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int data_sum;
	listint_t *temp = head;

	while (temp)
	{
		data_sum += temp->n;
		temp = temp->next;
	}
	return (data_sum);
}
