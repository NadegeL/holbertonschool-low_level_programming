#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - returns a pointer to a new string
 *  which is a duplicate of the string
 * @b: duplicate of string
 * Return: char pointer to malloc created memory address or NULL if error
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
		return (ptr);
}
