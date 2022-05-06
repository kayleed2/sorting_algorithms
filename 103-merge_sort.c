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
    int mid;
    int *final_array;
    int *left;
    int *right;

    if (size < 2)
        return;

    if (size % 2 != 0)
        mid = size - (size / 2);
    else 
        mid = size / 2;

    final_array = malloc(sizeof(array));

    if (!final_array) 
        free(final_array);

    merge(0, mid, array, final_array);
    merge(mid + 1, size, array, final_array);

}

void merge(int start, int end, int *arr, int *final_array) {
    int leftPointer = start;
    int rightPointer = end;
    int k;

    for (k = start; k <= end; k++) {
        if (leftPointer == end) {
            final_array[k] = arr[rightPointer];
            rightPointer++;
        } else if (rightPointer == end) {
            final_array[k] = arr[leftPointer];
            leftPointer++;
        } else if (arr[leftPointer] < arr[rightPointer]) {
            final_array[k] = arr[leftPointer];
            leftPointer++;
        } else {
            final_array[k] = arr[rightPointer];
            rightPointer++;
        }
    }
    for (k = start; k <= end; k++) {
        arr[k] = final_array[k];
    }
}
