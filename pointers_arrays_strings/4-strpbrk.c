#include "main.h"

/**
 *strpbrk() - function locates the first occurrence in the string s
 *
 *@s: la chaine dans laquelle on chercher
 *@accept: le nb de bytes recherchés
*/
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
		return (s);
	}
	s++;
}
return (NULL);
}
