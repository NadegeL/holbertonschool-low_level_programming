#include "main.h"
/**
 * _strncat - check the code
 *
 *@src: world
 *@dest: hello
 *@n: index
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
{
		dest_len++;
}
	for (i = 0; src[i] && i < n; i++)
{
		dest[dest_len++] = src[i];
}
	return (dest);
}
