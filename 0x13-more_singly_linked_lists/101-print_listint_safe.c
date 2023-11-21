#include "lists.h"
/**
 * print_listint_safe - function to print a linked list with loop safely.
 * @head: pointer to first node in list
 * Return: total nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_ofn = NULL;
	const listint_t *n_l = NULL;
	size_t counter = 0;
	size_t new_node;

	temp_ofn = head;
	while (temp_ofn)
	{
		printf("[%p] %d\n", (void *)temp_ofn, temp_ofn->n);
		counter++;
		temp_ofn = temp_ofn->next;
		n_l = head;
		new_node = 0;
		while (new_node < counter)
		{
			if (temp_ofn == n_l)
			{
				printf("-> [%p] %d\n", (void *)temp_ofn, temp_ofn->n);
				return (counter);
			}
			n_l = n_l->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
