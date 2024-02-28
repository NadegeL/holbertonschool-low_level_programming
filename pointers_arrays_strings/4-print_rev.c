#include "main.h"

/**
 * _print_rev - function that prints in rev.
 *
 *@s: pointeur
 * Return: Always 0.
 */
void print_rev(char *s)
{
	while (*s)
	{
		_putchar (*s--);
	}
_putchar ('\n');
}

