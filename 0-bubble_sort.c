#include "sort.h"

/**
 * bubble_sort - Sort using bubble sort algorithm
 * @array: Array of ints to sort
 * @size: Size of array
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	long unsigned int i, j, tmp;

	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
