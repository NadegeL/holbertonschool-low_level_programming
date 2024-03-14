#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _calloc -  function allocates memory for an array,
* of specific size bytes
* @nmemb: nb d'elements à alouer
* @size: size de chaque élements
* Return: return pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
{
	char *ptr;/*ptr vers mémoire*/
	unsigned int n;/*compteur*/

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	n = 0;
	while (n < nmemb * size)
	{/* parcourt chq elmt du tableau alloué */
		ptr[n] = 0;
		n++;
	}
	return (ptr);
}
}
