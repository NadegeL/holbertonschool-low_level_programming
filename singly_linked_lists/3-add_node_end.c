#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return: Address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *ptr;
    list_t *new_node;
    int i;
/*Parcours la liste pour atteindre le dernier élément*/
    ptr = *head;
    while (ptr && ptr->next != NULL)
        ptr = ptr->next;
/*Compte la longueur de la chaîne str*/
    for (i = 0; str[i] != '\0'; i++)
/*Alloue de la mémoire pour le nouveau nœud*/
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
/*En cas d'échec de l'allocation de mémoire, libère et retourne NULL*/
        free(new_node);
        return (NULL);
    }
/*Duplique la chaîne str dans le nouveau nœud*/
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
/*En cas d'échec de la duplication de chaîne, libère et retourne NULL*/
        free(new_node);
        return (NULL);
    }
/* Initialise la longueur de la chaîne dans le nouveau nœud*/
    new_node->len = i;
/*Initialise le prochain pointeur du nouveau nœud à NULL car il sera le dernier*/
    new_node->next = NULL;

/*Si la liste n'est pas vide, attache le nouveau nœud à la fin*/
    if (ptr)
        ptr->next = new_node;
    else/*Sinon, si la liste est vide, le nouveau nœud devient la tête de liste*/
    *head = new_node;/*Retourne l'adresse du nouveau nœud ajouté*/
	return (new_node);
}
