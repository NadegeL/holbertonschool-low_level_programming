#include <main.h>
/*
*reverse_array: inverser un tableau avec n
*
*@n: numbers
*/
void reverse_array(int *a, int n)

{
int temp;

if (a >= n)
return;
temp = arr[a];
arr[a] = arr[n];
arr[n] = temp;
reverse_array(arr, a + 1, n - 1);
}
