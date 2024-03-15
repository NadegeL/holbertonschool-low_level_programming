#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog- function that create a new dog
 *strdup: returns a pointer to a new string
 * @name:ptr
 * @age: ..
 * @owner: ..
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
