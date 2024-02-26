#include "main.h"
/**
 * print_diagonal - Prints a diag.
 *
 *@n: number
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int size;
	int hauteur;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (size = 0; size < n; size++)
		{
		for (hauteur = 0; hauteur < size; hauteur++)
		{
			_putchar(' ');
		}
		}
	_putchar('\\');
	_putchar('\n');

}

