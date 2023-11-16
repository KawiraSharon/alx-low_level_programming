#include "lists.h"

/**
 * add_node_end - function that adds new node to end of this list
 * @head: pointer to pointer for new last node
 * @str: the string we shall duplicate
 *
 * Return: address of last new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t len_var = 0;
	list_t *ptrNew, *ptrTemp;

	ptrNew = malloc(sizeof(list_t));

	if (ptrNew == NULL)
		return (NULL);

	ptrNew->str = strdup(str);

	while (str[len_var])
		len_var++;

	ptrNew->len = len_var;
	ptrNew->next = NULL;
	ptrTemp = *head;

	if (ptrTemp == NULL)
		*head = ptrNew;

	else
	{
		while (ptrTemp->next != NULL)
		ptrTemp = ptrTemp->next;
		ptrTemp->next = ptrNew;
	}
	return (*head);
}
