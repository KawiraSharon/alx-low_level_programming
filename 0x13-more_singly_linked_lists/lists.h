#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * struct listint_ksm - struct d_type, list.., name given
 * @n: count int
 * @next: pointer to node next
 *
 * Description: template and betty doc for each present element
 *
 */
typedef struct listint_ksm
{
	int n;
	struct listint_ksm *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
size_t free_listint_safe(listint_t **h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
listint_t *find_listint_loop(listint_t *head);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
int sum_listint(listint_t *head);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
size_t print_listint_safe(const listint_t *head);

#endif
