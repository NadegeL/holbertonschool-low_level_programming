#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the address of memory to print
 * @c: the size of the memory to print
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
	return (s);
	else
	return ('\0');
}

