#include "sort.h"

/**
 * selection_sort - sorts an array in ascending order
 * @array: Array of integers
 * @size: Size of array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	unsigned long int tmp = 0;
	unsigned long int min = 0;
	unsigned long int index, ci = 1;

	if (!array || size < 2)
		return;

	for (index = 0; index < size - 1;)
	{
		if (ci == size)
		{
			if (index != min)
			{
				tmp = array[index];
				array[index] = array[min];
				array[min] = tmp;
				print_array(array, size);
			}
			index++;
			min = index;
			ci = index + 1;
			continue;
		}
		if (array[min] > array[ci])
			min = ci;
		ci++;
	}
}
