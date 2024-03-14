#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* array_range -  function allocates memory for an array,
* of specific size bytes
* @min: nb d'elements à alouer
* @max: size de chaque élements
* Return: return pointer
*/
int *array_range(int min, int max)
{
{
	int *ptr;
	int arr;
	/*arr = index*/

	if (min > max)
	{
		return (NULL);
	}
/*nombre d'éléments nécessaires pour stocker tous les entiers*/
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	arr = 0;
	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}
/*
*chaque int entre min et max (inclusivement)
*est assigné à l'emplacement correspondant dans le tableau ptr.
*À chaque itération, min est incrémenté de 1 et l'index arr
*est également incrémenté.
*/

	return (ptr);
}
}
