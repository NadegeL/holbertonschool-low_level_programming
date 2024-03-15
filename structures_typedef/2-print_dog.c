#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that print structure
 *
 * @d:ptr
 *
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		if (d->name)
		{
		printf("name: %s\n", d->name);
		}
		else
		{
		printf("name: (nil)\n");
		}
	printf("age: %f\n", d->age);
	if (d->owner)
		{
		printf("owner: %s\n", d->owner);
		}
	else
	{
	printf("owner:(nil)\n");
	}

	}
}
