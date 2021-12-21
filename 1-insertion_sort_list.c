#include "sort.h"

/**
 * insertion_sort_list - sorts a doiubly linked list in ascending order
 * @list: pointer to doubly linked list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, listint_t *tmp;
	listint_t *copy = NULL;

	if (!list)
		return;

	current = (*list)->next;
	tmp = current;

	while (current != NULL)
	{
		if (tmp->n < tmp->prev->n)
		{
			
		}
}
