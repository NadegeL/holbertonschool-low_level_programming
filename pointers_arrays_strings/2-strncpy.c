#include "main.h"
/**
 * _strncpy -  function that copy the a string
 *@dest: plus grand
 *@src: plus petit
 *@n: entier constant
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)

{
	int i = 0;

	while (i < n && src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}
	while (i < n)
{
	dest[i++] = '\0';
}
	return (dest);
}
