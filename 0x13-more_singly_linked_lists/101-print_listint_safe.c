#include "lists.h"

/**
 * print_listint_safe - function to print linked list listint_t
 * @head: pointer to first node in the list
 * Return: no of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptrTemp = NULL;
	const listint_t *listno = NULL;
	size_t count = 0;
	size_t ptrNew;

	if (!head)
	{
		exit(98);
	}

	ptrTemp = head;
	while (ptrTemp)
	{
		printf("[%p] %d\n", (void *)ptrTemp, ptrTemp->n);
		count++;
		ptrTemp = ptrTemp->next;
		listno = head;
		ptrNew = 0;
		while (ptrNew < count)
		{
			if (ptrTemp == listno)
			{
				printf("-> [%p] %d\n", (void *)ptrTemp, ptrTemp->n);
				return (count);
			}
			listno = listno->next;
			ptrNew++;
		}
	}
	return (count);
}
