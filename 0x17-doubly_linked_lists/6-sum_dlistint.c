#include "lists.h"

/**
 * sum_dlistint - returns the sum; all data (n) in double list
 *
 * @head: list head
 * Return: data sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
