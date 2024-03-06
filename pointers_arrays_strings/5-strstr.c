#include "main.h"

/**
 *_strstr - function locates the first occurrence of the substring needle.
 *
 *@haystack: la chaine dans laquelle on chercher
 *@needle: la sous chaine
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}
return ('\0');
}
