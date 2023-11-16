#include "lists.h"

/**
 * free_list - function that uses free to free list_t
 * @head: pointer to first node of singly linked list
 * Return: no return because void data type is declared
 */
void free_list(list_t *head)
{
	list_t *ptrTemp;

	while ((ptrTemp = head) != NULL)
	{
		head = head->next;
		free(ptrTemp->str);
		free(ptrTemp);
	}
}
