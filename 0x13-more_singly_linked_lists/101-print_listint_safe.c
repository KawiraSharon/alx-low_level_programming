#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptrtemp = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_n;

	ptrtemp = head;
	while (ptrtemp)
	{
		printf("[%p] %d\n", (void *)ptrtemp, ptrtemp->n);
		counter++;
		ptrtemp = ptrtemp->next;
		l_n = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (ptrtemp == l_n)
			{
				printf("-> [%p] %d\n", (void *)ptrtemp, ptrtemp->n);
				return (counter);
			}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
