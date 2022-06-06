#include "sort.h"
/**
 * radix_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void radix_sort(int *array, size_t size)
{
    size_t i = 0;
    size_t j = 0;
    int k = 0;
    int t = 0;
    int min = 0;
    int tmp = 0;
    int *arr1 = malloc(size * sizeof(array));

    for (i = 0; i < size; i++)
        arr1[i] = array[i];

    for (k = 0; k < 3; k++) {
        for (i = 0; i < size; i++) {
            min = array[i] % 10;
            t = i;
            for (j = i + 1; j < size; j++) {
                if (min > (array[j] % 10)) {
                    min = array[j] % 10;
                    t = j;
                }
            }

            tmp = arr1[t];
            arr1[t] = arr1[i];
            arr1[i] = tmp;

            tmp = array[t];
            array[t] = array[i];
            array[i] = tmp;

        }
        for (j = 0; j < size; j++)
            array[j] = array[j] / 10;

        if (k < 2)
            print_array(arr1, size);
    }
    for (i = 0; i < size; i++)
        array[i] = arr1[i];
}
