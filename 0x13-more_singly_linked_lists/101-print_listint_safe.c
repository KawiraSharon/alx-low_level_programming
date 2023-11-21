#include "lists.h"

/**
 * print_listint_safe - function to print a linked list with loop safely.
 * @head: pointer to first node in list
 * Return: total nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptrTemp = NULL;
	const listint_t *list = NULL;
	size_t count = 0;
	size_t newnode;

	ptrTemp = head;
	while (ptrTemp)
	{
		printf("[%p] %d\n", (void *)ptrTemp, ptrTemp->n);
		count++;
		ptrTemp = ptrTemp->next;
		list = head;
		newnode = 0;
		while (newnode < count)
		{
			if (ptrTemp == list)
			{
				printf("-> [%p] %d\n", (void *)ptrTemp, ptrTemp->n);
				return (count);
			}
			list = list->next;
			newnode++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
