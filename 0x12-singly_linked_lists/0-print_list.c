#include "lists.h"

/**
 * print_list - function to print all elements in a singly linked list_t
 * @h: arguments being passed to func, make the arg list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	/* initialize return data type, size_t*/
	size_t node_no;
	
	node_no = 0;
	/*loop around h list*/
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s", 0, "(nil)");
		/*no node to return because the current node was calculated prev.*/
		
		else
			printf("[%d] %s", h->len, h->str);
			/*use h->next as the newly incremented value of h, not h++*/
		h = h->next;
		node_no++;
	}

	return(node_no);
}
