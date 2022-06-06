#include "sort.h"

/**
* merge - Sorts array
* @l: starting point of array
* @r: ending point of array
* @m: mid point of array
* @array: array to be sorted
* @final_array: final array
* Return: Sorted array
**/

void merge(int *array, int l, int m, int r, int *final_array) 
{
    int i = l;
    int j = m + 1;
    int k = l;

    while (i <= m && j <= r) 
    {
        if (array[i] <= array[j]) 
        {
            final_array[k] = array[i];
            k++;
            i++;
        }
        else 
        {
            final_array[k] = array[j];
            k++;
            j++;
        }
    }

    while (i <= m) 
    {
        final_array[k] = array[i];
        k++;
        i++;
    }

    for (i = l; i <= r; i++) {
        array[i] = final_array[i];
    }
}

/**
* call_to_sort - Sorts array in ascending order
* @l: starting point of array
* @r: ending point of array
* @array: array to be sorted
* @final_array: final array
* Return: Sorted array
**/

void call_to_sort(int *array, int l, int r, int *final_array) 
{
    int m;

    if (l < r) 
    {
        m = (r + l) / 2;   
        call_to_sort(array, l, m, final_array);
        call_to_sort(array, m + 1, r, final_array);
        merge(array, l, m, r, final_array);
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
    int *final_array;

    if (size < 2)
        return;

    final_array = malloc(sizeof(int) * size);
    
    if (!final_array || !array)
        return;
    
    call_to_sort(array, 0, size, final_array);
    free(final_array);
}
