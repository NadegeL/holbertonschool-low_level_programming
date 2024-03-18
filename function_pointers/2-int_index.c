#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search for an integrer
 * @array: tableau d'entiers (int *array).
 * @size:nb d'elements in the array.
 * @cmp: ptr vers fonction qui compare les valeurs
 * int_index renvoie l'indice du premier élément
 *  en argument et ne retourne rien (void (*action)(int)).
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

if (array == NULL || cmp == NULL)
	return (-1);

for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
	return (i);
}
return (-1);
}
