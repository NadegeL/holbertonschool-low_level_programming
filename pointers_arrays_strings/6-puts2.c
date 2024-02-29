#include "main.h"
#include "2-strlen.c"

/**
 * puts2(char *str) - function that prints in rev.
 *
 *@str: strg
 * Return: Always 0.
 */
void puts2(char *str)

{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;

		if (str[i] % 2 == 0)
		{
			_putchar (str[i]);
			i++;
		}
	}
}
