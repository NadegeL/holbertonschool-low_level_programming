#include "main.h"
/**
 * _strcmp -  compare des chaines
 *
 * @s1: first chaine
 * @s2: second chaine
 *
 * Return: int value.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

