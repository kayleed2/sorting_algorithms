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
    int l = 0;
    int r = size;
    int mid;

    if (size < 2)
        return;

    if (size % 2 != 0)
        mid = size - (size / 2);
    else 
        mid = size / 2;

    if (l < r) 
    {
        merge_sort(array, mid);
        merge_sort(array, mid + 1);

        merge(array, l, mid, size);
    }
}

/**
* merge - Sorts array
* @start: starting point of array
* @end: ending point of array
* @arr: array to be sorted
* @final_array: final array
* Return: Sorted array
**/

void merge(int *array, int l, int m, int r) 
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[100];
    int R[100];

    for (i = 0; i < n1; i++)
        L[i] = array[l + i];
    for (j = 0; j < n2; j++)
        R[j] = array[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        }
        else {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) 
    {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) 
    {
        array[k] = R[j];
        j++;
        k++;
    }
}
