#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - function that prints in rev.
 *
 *@s: strg
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	int i = 0;
	char firstChar;
	char lastChar;

	for (; i <= len - i; i++)
	{
		firstChar = s[i];
		lastChar = s[len - i];

		s[len - i] = firstChar;
		s[i] = lastChar;
	}
}
