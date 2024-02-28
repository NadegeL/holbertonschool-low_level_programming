#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - function that prints in rev.
 *
 *@s: strg
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = len - 1 ; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
