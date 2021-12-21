#include "sort.h"

/**
 * insertion_sort_list - sorts a doiubly linked list in ascending order
 * @list: pointer to doubly linked list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *tmp = NULL;
	listint_t *copy = NULL;

	if (!list)
		return;
	
	while (current != NULL)
	{
		tmp = current->next;
		while (tmp && tmp->prev &&
				tmp->n < tmp->prev->n)
		{
			copy = current;
			current = tmp;
			tmp = copy;
			print_list(*list);
			tmp = tmp->prev;
		}
		current = current->next;
		print_list(*list);
		current++;
	}
}
