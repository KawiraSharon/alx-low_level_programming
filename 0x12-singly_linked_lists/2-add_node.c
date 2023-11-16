#include "lists.h"

/**
 * add_node - function that adds new element at beginning of list
 * @head: new head in list
 * @str: string to be duplicated and stored in new list
 * Return: address of new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptrNew;
	size_t i = 0;

	ptrNew = malloc(sizeof(list_t));
	if (ptrNew == NULL)
		return (NULL);

	while (str[i])
		i++;

	ptrNew->str = strdup(str);
	ptrNew->len = i;
	ptrNew->next = *head;
	*head = ptrNew;

	return (ptrNew);
}
