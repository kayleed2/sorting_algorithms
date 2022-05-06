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
    int k = 0;

    while (i <= m && j <= r) {
        if (array[i] <= array[j]) {
            final_array[k] = array[i];
            k += 1;
            i += 1;
        }
        else {
            final_array[k] = array[j];
            k += 1;
            j += 1;
        }
    }

    while (i <= m) {
        final_array[k] = array[i];
        k += 1;
        i += 1;
    }

    while (j <= r) {
        final_array[k] = array[j];
        k += 1;
        j += 1;
    }

    for (i = l; i <= r; i += 1) {
        array[i] = final_array[i - l];
    }
    print_array(array, sizeof(array));
    printf("\n ^ ARRAY");
}

/**
* call_to_sort - Sorts array in ascending order
* @l: starting point of array
* @r: ending point of array
* @array: array to be sorted
* @final_array: final array
* Return: Sorted array
**/

void call_to_sort(int *array, int l, int r, int *final_array) {
    int m;

    if (l < r) 
    {
        if (r % 2 != 0)
            m = r - (r / 2);
        else 
            m = r / 2;
        
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
    
    if (!final_array)
        return;
    
    call_to_sort(array, 0, size - 1, final_array);
    free(final_array);
}
