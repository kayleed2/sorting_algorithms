#include <stdio.h>
#include "sort.h"

/**
* merge_sort - Sorts array in ascending order
* @array: array to be sorted
* @size: size of array
* Return: Sorted array
**/

void merge_sort(int *array, size_t size)
{
    int *right;
    int mid;

    if (size < 2)
        return;

    if (size % 2 != 0)
        mid = size - (size / 2);
    
    mid = size / 2;
    right = array + mid;

    merge_sort(right, (size - mid));
    print_array(right, (size - mid));
}
