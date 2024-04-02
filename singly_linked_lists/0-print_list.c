#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while(h != NULL)
	{
	if(h->str == NULL)
	printf("[%u] %s\n", 0, "(nil)");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	count++;
	}
	return(count);
}
