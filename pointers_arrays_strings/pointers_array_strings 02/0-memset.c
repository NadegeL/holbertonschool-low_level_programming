#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte.
 * @b: the char
 * @n: the
 * @s:ptr
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)

{
unsigned int i;

i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}

