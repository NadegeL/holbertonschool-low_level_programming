#include "main.h"

/**
 * puts_half - half string print
 *
 *@str: strg
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int n;

	while (str[i++])
		len++;
	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;
	for (i = n; i < len ; i++)
		_putchar(str[i]);

	_putchar('\n');
}
