#include "main.h"

/**
 *swap_int - swap a et b
 *
 *@a: a
 *@b: b
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
