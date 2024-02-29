#include "main.h"
#include "2-strlen.c"

/**
 * puts2(char *str) - every other character of a string
 *
 *@str: strg
 *@i: index
 *@len: longueur
 * Return: Always 0.
 */
void puts2(char *str)

{
	int i = 0;
	int len = 0;

	while (str[i++])
		len++;
	{
		for(i = 0; i < len; i += 2)
		_putchar ( str[i] );
	}
	_putchar('\n');
}
