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
    // int *right;
    // int *left;
    int mid;
    // int start;
    // int leftPointer;
    // int rightPointer;

    if (size < 2)
        return;

    if (size % 2 != 0)
        mid = size - (size / 2);
    
    printf("%ul", (unsigned long) size);
    
    // mid = size / 2;
    // right = array + (mid + 1);
    // left

    // merge_sort(right, (size - mid));
    // merge_sort(left, mid);
    
    // start = 0;
    // leftPointer = start;
    // rightPointer = 
}
