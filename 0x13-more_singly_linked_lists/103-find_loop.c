#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list node being searched
 * Return: address of node at start of loop, or NULL on fail
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptrFind = head;
	listint_t *ptrLoop = head;

	if (!head)
		return (NULL);

	while (ptrFind && ptrLoop && ptrLoop->next)
	{
		ptrLoop = ptrLoop->next->next;
		ptrFind = ptrFind->next;

		if (ptrLoop == ptrFind)
		{
			ptrFind = head;
			while (ptrFind != ptrLoop)
			{
				ptrFind = ptrFind->next;
				ptrLoop = ptrLoop->next;
			}
			return (ptrLoop);
		}
	}

	return (NULL);
}
