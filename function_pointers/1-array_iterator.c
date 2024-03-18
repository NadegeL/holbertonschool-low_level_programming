#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - execute a function given on array
 * @array: tableau d'entiers (int *array).
 * @size:sa taille (size_t size).
 * @action: fonction pointeur qui prend un entier
 *  en argument et ne retourne rien (void (*action)(int)).
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
	return;
/* Si le tableau ou la fonction d'action est NULL, on quitte la fonction*/
while (size-- > 0)
	{
	action(*array);
/*Appelle la fonction d'action sur l'élément actuel du tableau*/
	array++;
	}
}
