#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptrTemp = NULL;
	const listint_t *ptrN = NULL;
	size_t count = 0;
	size_t node_new;

	ptrTemp = head;
	while (ptrTemp)
	{
		printf("[%p] %d\n", (void *)ptrTemp, ptrTemp->n);
		count++;
		ptrTemp = ptrTemp->next;
		ptrN = head;
		node_new = 0;
		while (node_new < count)
		{
			if (ptrTemp == ptrN)
			{
				printf("-> [%p] %d\n", (void *)ptrTemp, ptrTemp->n);
				return (count);
			}
			ptrN = ptrN->next;
			node_new++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
