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
    int p = 0;
    int r = size;
    int q;
    int *b[sizeof(array)];

    if (size < 2)
        return;

    if (size % 2 != 0)
        q = size - (size / 2);
    else 
        q = size / 2;

    if (p < r) 
    {
        merge_sort(array, q);
        merge_sort(array, q + 1);

        merge(array, p, q, r, b);
    }
    print_array(array, sizeof(array));
}

/**
* merge - Sorts array
* @start: starting point of array
* @end: ending point of array
* @arr: array to be sorted
* @final_array: final array
* Return: Sorted array
**/

void merge(int *array, int p, int q, int r, int *b) 
{
    int i, j, k;
    k = 0;
    i = p;
    j = q + 1;

    while (i <= q && j <= r) 
    {
        if (array[i] < array[j]) {
            b[k++] = array[i++];
            i++;
        }
        else {
            b[k++] = array[j++];
        }
    }

    while (i <= q) 
    {
        b[k++] = array[i++];
    }

    while (j <= r) 
    {
        b[k++] = array[j++];
    }

    for (i = r; i >= p; i--)
        array[i] = b[--k];
}
