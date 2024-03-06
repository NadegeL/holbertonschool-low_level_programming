#include "main.h"
#include <stdio.h>

/**
 * strspn - Returns the number of bytes in the initial segment of s
 * @s: the address of memory to print
 * @a: the size of the memory to print
 * Return: Nothing.
 */
unsigned int _strspn(char *s, char *accept)

{
unsigned int len = 0;
int i;
char *a;


while (*s)
{
i = 0;
a = accept;
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
	}
return (len);
}
