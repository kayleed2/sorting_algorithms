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
    int i;
    int *right = array + (size / 2);

    if (size < 2)
        return;
    
    for(i = 0; i < (int) size; i++)
        printf("%d", right[i]);
}
