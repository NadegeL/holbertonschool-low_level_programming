#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - print at start of list.
 * @head: dble pointeur.
 * @n: const int.
 *
 * Return: nodes.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	return (NULL);

new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

new_node->n = n;
new_node->prev = NULL;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
return (new_node);
}
