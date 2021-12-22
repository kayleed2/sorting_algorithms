#include "sort.h"

/**
 * selection_sort - sorts an array in ascending order
 * @array: Array of integers
 * @size: Size of array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	int tmp;
	int *min = array;
	int *current = array;
	unsigned long int index, ci;

	if (!array || size < 2)
		return;

	for (index = 0; index < size;)
	{
		for (ci = index; ci < size; ci++)
		{
			if (*current < *min)
				min = current;
			current++;
		}
		tmp = array[index];
		array[index] = *min;
		*min = tmp;
		print_array(array, size);
		index++;
		current = &array[index];
		min = &array[index];
	}
}
