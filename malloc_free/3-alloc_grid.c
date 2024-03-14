#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints a 2dimensional array
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, n;

	if (width <= 0 || height <= 0)
	return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
	if (array[i] == NULL)
		{
	for (n = 0; n < i; n++)
			{
		free(array[n]);
			}
		free(array);
		return (NULL);
		}
	}
return (array);
}

