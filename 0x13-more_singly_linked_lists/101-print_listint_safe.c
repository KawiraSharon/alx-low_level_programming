#include "lists.h"
/**
 * print_listint_safe - print linked list listint_t
 * @head: points to first node of list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptrtemp = NULL;
	const listint_t *list_no = NULL;
	size_t count_node = 0;
	size_t newnode;

	ptrtemp = head;
	while (ptrtemp)
	{
		printf("[%p] %d\n", (void *)ptrtemp, ptrtemp->n);
		count_node++;
		ptrtemp = ptrtemp->next;
		list_no = head;
		newnode = 0;
		while (newnode < count_node)
		{
			if (ptrtemp == list_no)
			{
				printf("-> [%p] %d\n", (void *)ptrtemp, ptrtemp->n);
				return (count_node);
			}
			list_no = list_no->next;
			newnode++;
		}
		if (!head)
			exit(98);
	}
	return (count_node);
}
