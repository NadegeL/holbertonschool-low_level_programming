#include "main.h"
/**
 * print_square - Prints a square.
 *
 *@size: integrer
 *
 *Return: Always 0.
 */
void print_square(int size)
{
int c, n;

if (size > 0)
{
	for (c = 0; c < size; c++)
	{
	for (n = 0; n < size; n++)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
}
else
_putchar('\n');
}



