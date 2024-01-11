#include "lists.h"

/**
 * sum_dlistint - returns the summation; all data (n) in double list
 *
 * @head: list head
 * Return: data summation
 */
int sum_dlistint(dlistint_t *head)
{
	int summation;

	summation = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			summation += head->n;
			head = head->next;
		}
	}

	return (summation);
}
