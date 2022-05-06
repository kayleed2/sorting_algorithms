#include <stdio.h>
#include "sort.h"

/**
* merge - Sorts array
* @start: starting point of array
* @end: ending point of array
* @array: array to be sorted
* @final_array: final array
* Return: Sorted array
**/

void merge(int *array, int l, int m, int r) 
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[80], R[80];
    
    for (i = 0; i < n1; i++)
        L[i] = array[l + i];
    
    for (j = 0; j < n2; j++)
        R[j] = array[m + 1 + j];
  
    i = 0;
    j = 0;
    k = l;
    
    while (i < n1 && j < n2) {
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

    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
}

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
    int m;
    int right;

    if (size < 2)
        return;

    if (size % 2 != 0)
        m = size - (size / 2);
    else 
        m = size / 2;

    right = array + (m + 1);
    
    if (l < r) 
    {
        merge_sort(array, m);
        merge_sort(right, m);

        merge(array, l, m, r);
    }
    print_array(array, sizeof(array));
}
