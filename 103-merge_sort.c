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
    int i;

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

    for (i = 0; i <= (int)size; i++) {
        array[i] = final_array[i];
    }

    printf("Left array: ");
    for (i = 0; i < (int)size; i++)
        printf("%d, ", array[i]);
    
    printf("\n");
    printf("Right array: ");
    
    for (i = 0; i < (int)size; i++)
        printf("%d, ", final_array[i]);
}

/**
* merge - Sorts array
* @start: starting point of array
* @end: ending point of array
* @arr: array to be sorted
* @final_array: final array
* Return: Sorted array
**/
void merge(int start, int end, int *arr, int *final_array) 
{
    int leftPointer = start;
    int rightPointer = ((start + end) / 2) + 1;
    int size = start + end;
    int mid = ((start + end) / 2);
    int k;

    for (k = start; k <= size; k++) {
        if (leftPointer == mid + 1) {
            final_array[k] = arr[rightPointer];
            rightPointer++;
        } else if (rightPointer == size + 1) {
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
}
