#include "main.h"

/**
 * reverse_array - reverse an array of n
 * @a: an array of integers
 * @n: the number of elements to swap
 * @arr: tableau
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int temp;
int start = 0;
int end = n - 1;

while (start < end)
{
temp = a[start];
a[start] = a[end];
a[end] = temp;
start++;
end--;
}
}
