#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @i: index
 * @j: index compteur
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i,n;

	if(width <= 0 || height <= 0);
	return (NULL);

	array = malloc(height * sizeof(int*));

	if(array == NULL)
		return (NULL);

	for(i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
	if(array[i] == NULL)
		{
    for (j = 0; j < i; j++)
            {
            free(array[j]);
            }
        free(array);
        return (NULL);
        }
    }
    return (array);
}

