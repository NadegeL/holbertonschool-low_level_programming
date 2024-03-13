#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate 2strings
 * @s1: Best
 * @s2: School
 * Return: 0
 */

char *str_concat(char *s1, char *s2)

{
	char *ptr;
	int len1 = 0;
	int len2 = 0;
	int i, j;
	int lenTotal;

if (s1 == NULL || s2 == NULL)
{
s1 = "";
s2 = "";
}
for (i = 0; s1[i]; i++)
len1 = len1 + 1;

for (j = 0; s2[j]; j++)
len2 = len2 + 1;
lenTotal = len1 + len2 + 1;

ptr = malloc(lenTotal);
if (ptr == NULL)
	return (NULL);

for (i = 0; s1[i] != '\0'; i++)
{
	ptr[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
	ptr[i + j] = s2[j];
}
ptr[i + j] = '\0';

return (ptr);
}
