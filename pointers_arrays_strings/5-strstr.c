#include "main.h"

/**
 *_strpbrk - function locates the first occurrence of the substring needle.
 *
 *@haystack: la chaine dans laquelle on chercher
 *@needle: la sous chaine
*/
char *_strstr(char *haystack, char *needle)

{
	int i = 0;
	while (*haystack)
	{
	for(i = 0; needle[i]; i++)
	{
		if(*haystack == needle[i])
		return ( haystack);
	}
	haystack++;
	}
return ('\0');
}
