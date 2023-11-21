#include "lists.h"

/**
 * free_listint - function to free given list
 * @head: pointer to first node in list
 * Return: nth as void d_type is declared
 */
void free_listint(listint_t *head)
{
	/*declare variable pointer to loop clearing*/
	listint_t *temporal;

	while (head != NULL)
	{
		temporal = head->next;
		free(head);
		head = temporal;
	}
}
