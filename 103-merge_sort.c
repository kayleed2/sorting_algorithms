#include <stdio.h>
#include "sort.h"

/**
* merge_sort - Sorts array in ascending order
* array: array to be sorted
* size: size of array
* Return: Sorted array
**/

void merge_sort(int *array, size_t size)
{
    int i;

    for(i = 0; array[i] != NULL; i++)
        printf("%d", array[i]);

    printf(size);
}
