#include "lists.h"

/**
 * print_listint_safe - function to print linked list listint_t
 * @head: pointer to first node in the list
 * Return: no of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	
	if (head == NULL)
	{
		exit(98);
	}
	
	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (size_t)(slow - head + 1);
		}
	}
	
	return 0;
}
