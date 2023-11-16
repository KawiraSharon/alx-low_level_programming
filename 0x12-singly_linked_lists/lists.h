#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * struct list_t - singly linked list of elements being printed
 * @str: string dynamically allocated to first segment of node
 * @list_len: length of string, always positive value
 * @next: address pointer of next node
 */
typedef struct list_k
{
	char *str;
	unsigned int len;
	struct list_k *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
