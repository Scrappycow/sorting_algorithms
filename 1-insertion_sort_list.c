#include "sort.h"

/**
 * swap_nodes - swaps 2 nodes in a doubly-linked list in c
 * @c: address of the 1st node
 * @b: address of the 2nd node
 *
 * Return: void
 */
void swap_nodes(listint_t *c, listint_t *b)
{
	if (c->prev)
		c->prev->next = b;
	if (b->next)
		b->next->prev = c;
	c->next = b->next;
	b->prev = c->prev;
	c->prev = b;
	b->next = c;

}

/**
 * insertion_sort_list - insertion-sorts a doubly-linked list
 * @list: address of pointer to head
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (!list || !*list || !(*list)->next)
		return;
	i = (*list)->next;
	while (i)
	{
		j = i;
		i = i->next;
		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				swap_node(j->prev, j);
				if (!j->prev)
					*list = j;
				print_list((const listint_t *)*list);
			}
			else
				j = j->prev;
		}

	}
}
