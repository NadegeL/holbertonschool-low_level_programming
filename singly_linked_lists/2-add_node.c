#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_t *add_node - list of elt.
 * @head: dble pointeur.
 * @str: ptr.
 *
 * Return: NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *nvElt = malloc(sizeof(list_t));
unsigned int len = 0;

	if (str != NULL)
	len++;

	if (head == NULL)
	return (NULL);

	{
	if (nvElt == NULL)
	return (NULL);
	}
nvElt->str = strdup(str);
if (nvElt->str == NULL)
	{
	free(nvElt);
	return (NULL);
	}
nvElt->len = strlen(str);
nvElt->next = *head;
*head = nvElt;
return (nvElt);
}
