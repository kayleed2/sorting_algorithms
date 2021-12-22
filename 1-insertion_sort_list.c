#include "sort.h"

/**
 * insertion_sort_list - sorts a doiubly linked list in ascending order
 * @list: pointer to doubly linked list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (!list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		/* if current is larger than the previous node */
		while (current->n > current->prev->n)
		{
			if (!current->next)
				return;
			current = current->next;
		}
		/* set tmp marker for reference */
		tmp = current->next;
		/* figure out where the current node belongs */
		while (current->prev && current->n < current->prev->n)
			swapNode(list, current->prev, current);
		/* go again */
		current = tmp;
	}
}

/**
 * swapNode - swaps two adjacent nodes based on comparison
 * @list: the list of nodes
 * @node1: the first node in sequence
 * @node2: the second node in sequence
 * Return: void
 */
void swapNode(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	if (node2->next)
		node2->next->prev = node1;
	/* swaps node pointers, thus moving them */
	node1->next = node2->next;
	node2->prev = node1->prev;
	node2->next = node1;
	node1->prev = node2;
	while ((*list)->prev)
		*list = (*list)->prev;
	print_list(*list);
}
