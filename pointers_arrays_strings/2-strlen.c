#include "main.h"

/**
 * _strlen -  function that returns the length of a string
 *@s: str
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
