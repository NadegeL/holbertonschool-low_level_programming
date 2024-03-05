#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the address of memory to print
 * @c: the size of the memory to print
 * Return: Nothing.
 */
unsigned int _strspn(char *s, char *accept)
{

  unsigned int len = 0;
    int i;

    while (*s)
	{
        i = 0;
        char *a = accept;
	}
	while (*a)
	{
        if (*s == *a)
	{
        i = 1;
        break;
    }
        a++;
    }
	if (i)
	{
    len++;
    }
	else
	{
    break;
    }
    s++;
    
    return len;
}
