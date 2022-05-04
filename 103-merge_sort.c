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

    if (size < 2)
        return 0;
    
    int *right = array + (size / 2);
    for(i = 0; i < size; i++)
        printf("%d", right[i]);

    printf("%lu", (unsigned long) size);
}
