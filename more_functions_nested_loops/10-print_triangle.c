#include "main.h"
/**
 * print_triangle - triangle and reverse.
 *
 *@size: integrer
 *
 *Return: Always 0.
 */
void print_triangle(int size)

{
	int i, j, n;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
	{
		for (j = 0; j <= (size - i - 1); j++)
		{
			_putchar(' ');
		}
	for (n = 0; n <= i - 1; n++)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}

