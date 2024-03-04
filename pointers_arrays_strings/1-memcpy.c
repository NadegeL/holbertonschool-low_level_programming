#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copie des emplacements de la mémoire
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: nb d'octets
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}
}

