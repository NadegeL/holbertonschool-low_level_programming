#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * *new_dog- function that create a new dog
 *strdup: returns a pointer to a new string
 * @name:ptr
 * @age: ..
 * @owner: ..
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog); /* Libérer la mémoire allouée pour la structure du chien*/
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
	}
	return (new_dog);
}

