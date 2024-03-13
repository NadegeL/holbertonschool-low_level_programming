#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string
 *  which is a duplicate of the string
 * @str: duplicate of string
 * Return: char pointer to malloc created memory address or NULL if error
 */
char *_strdup(char *str)
{
	char *s;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len = len + 1;

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];

	return (s);

}
