#include "lists.h"

/**
 * add_nodeint_end - function that adds node at the end of a singly linked list
 * @head: pointer to first node in list
 * @n: data being added in new node being added on to list, also params oflist
 * Return: pointer to new element, or NULL if memory alloc of new node fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*declare ptr to new node*/
       /*initialize temp pointer to access all nodes until last node in list*/
	listint_t *ptrNewNode;
	listint_t *temp = *head;

	/*alloc memory for new node*/
	ptrNewNode = malloc(sizeof(listint_t));

	/*check success of memory alloc, else return null*/
	if (!ptrNewNode)
		return (NULL);

	ptrNewNode->n = n;
	ptrNewNode->next = NULL;

	/*rule out NULL List and make newnode head*/
	if (*head == NULL)
	{
		*head = ptrNewNode;
		return (*head);
	}
	/*traverse list's nodes to reach last node using temp node*/
	while (temp->next)
		temp = temp->next;

	/*link new node to next of ptr null*/
	temp->next = ptrNewNode;

	return (*head);
}
