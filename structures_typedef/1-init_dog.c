#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialisation de la variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * @d:ptr
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}