#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len- print len of list
 * @h: pointeur.
 *
 * Return: count.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
