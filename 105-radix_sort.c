#include "sort.h"
/**
 * get_max - get max element
 * @a: array
 * @n: size
 * Return: int
 */

int get_max(int *a, size_t n)
{
size_t i;
int max = a[0];

for (i = 1; i < n; i++)
{
if (a[i] > max)
{
max = a[i];
}

}
return (max);
}

/**
 * radix_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void radix_sort(int *array, size_t size)
{
size_t bucket[10][10], bucket_cnt[10];
size_t i, j, k, r, NOP = 0, divisor = 1, lar, pass;
lar = get_max (array, size);
while (lar > 0)
{
NOP++;
lar /= 10;
}
for (pass = 0; pass < NOP; pass++)
{
for (i = 0; i < 10; i++)
{
bucket_cnt[i] = 0;
}
for (i = 0; i < size; i++)
{
r = (array[i] / divisor) % 10;
bucket[r][bucket_cnt[r]] = array[i];
bucket_cnt[r] += 1;
}
i = 0;
for (k = 0; k < 10; k++)
{
for (j = 0; j < bucket_cnt[k]; j++)
{
array[i] = bucket[k][j];
i++;
}
}
divisor *= 10;
for (i = 0; i < size; i++)
{
if (size == 1)
break;
if (i == size - 1)
printf("%d", array[i]);
else
printf("%d, ", array[i]);
}
printf("\n");
}
}
