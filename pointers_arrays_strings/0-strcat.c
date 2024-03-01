#include "main.h"
/**
 * _strcat - check the code
 *
 *@src: world
 *@dest: hello
 * Return: Always 0
 * while (src[i] != '\0')
 *	{	dest[length] = src[i];
 *	length++;
 *	i++;
 *	}
 */

char *_strcat(char *dest, char *src)

{
	int length, i;

	length = 0;
	i = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (; src[i] != 0; i++)
	{
		dest[length + i] = src[i];
	}

	dest[length + i] = '\0';
	return (dest);
}
