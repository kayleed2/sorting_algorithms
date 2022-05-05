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
    int *left;
    int *aux;
    int mid;
    int start;
    int leftPointer;
    int rightPointer;
    int k;

    if (size < 2)
        return;

    if (size % 2 != 0)
        mid = size - (size / 2);
    else 
        mid = size / 2;

    right = array + (mid);
    left = array;

    merge_sort(right, mid);
    merge_sort(left, mid);
    
    start = 0;
    leftPointer = start;
    rightPointer = mid;

    aux = malloc(sizeof(array) * 1);
    if (!aux)
        return;
    
    for (k = start; k <= (int)size; k++) {
        if (leftPointer == mid) {
            aux[k] = array[rightPointer];
            rightPointer++;
        } else if (rightPointer == (int)size) {
            aux[k] = array[leftPointer];
            leftPointer++;
        } else if (array[leftPointer] < array[rightPointer]) {
            aux[k] = array[leftPointer];
            leftPointer++;
        } else {
            aux[k] = array[rightPointer];
            rightPointer++;
        }
    }
    for (k = start; k <= (int)size; k++) {
        array[k] = aux[k];
    }
    free(aux);
}
