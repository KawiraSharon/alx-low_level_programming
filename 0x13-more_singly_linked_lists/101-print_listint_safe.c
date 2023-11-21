#include "lists.h"

/**
 * print_listint_safe - function that prints listint_t linked list
 * @head: pointer to first element in list
 * Return: number of nodes in list, or exit status 98 if fail
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptrTemp = NULL;
	const listint_t *ptrN = NULL;
	size_t count_int = 0;
	size_t node_new;

	ptrTemp = head;
	while (ptrTemp)
	{
		printf("[%p] %d\n", (void *) ptrTemp, ptrTemp->n);
		count_int++;
		ptrTemp = ptrTemp->next;
		ptrN = head;
		node_new = 0;
		while (node_new < count_int)
		{
			if (ptrTemp == ptrN)
			{
				printf("->[%p] %d\n", (void *)ptrTemp, ptrTemp->n);
				return (count_int);
			}
			ptrN = ptrN->next;
			node_new++;
		}
	}
	if (head == NULL)
		exit(98);

	return (count_int);
}
