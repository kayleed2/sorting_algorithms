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

	if (!list || !(*list)->next)
		return;

	current = (*list)->next;
	tmp = current;

	while (current != NULL)
	{
		current = current->next
		if (tmp->n < tmp->prev->n)
		{
			while (tmp->prev && tmp->n < tmp->prev->n)
			{
				copy = tmp->prev;
				copy->next = tmp->next;
		}
}
