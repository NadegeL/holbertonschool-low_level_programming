#include "dog.h"
#include <stdlib.h>
/**
 *free_dog- free memorie
 *strdup: returns a pointer to a new string
 * @d:ptr
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	return;
free(d->owner);
free(d->name);
free(d);
}
