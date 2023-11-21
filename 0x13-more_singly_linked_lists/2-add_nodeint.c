#include "lists.h"

/**
 * add_nodeint - func that add new node at start of list
 * @head: pointer to first node
 * @n: data new node takes
 * Return: hexadecimal value; address of new node or NULL if attempt failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* declare pointer to new node of d_type listint_t*/
	listint_t *ptrNewNode;

	/*allocate memory to newnode*/
	/*typecast does not work for nonscalar values d_type, but int float*/
	ptrNewNode = malloc(sizeof(listint_t));

	/*return error for NewNode memory allocation fail*/
	if (!ptrNewNode)
		return (NULL);

	ptrNewNode->n = n;
	ptrNewNode->next = *head;
	*head = ptrNewNode;

	return (*head);

}
