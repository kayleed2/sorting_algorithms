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
    int alg;
    int *right;

    if (size < 2)
        return;

    if (size % 2 != 0)
        alg = (size / 2) - 1;
    
    alg = size / 2;
    right = array + alg;
    
    print_array(array, size);
    print_array(right, alg);
}
