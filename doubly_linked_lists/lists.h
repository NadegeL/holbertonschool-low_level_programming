#ifndef list_h
#define list_h
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
/**
 * struct dlistint_s - doubly linked list
 * @size_t: lenght.
 * @p_tail: points to the end.
 * @p_head: points to the start.
 *
 * Description: doubly linked list size struct
 *
 *
typedef struct dlist
{
    size_t length;
    struct node *p_tail;
    struct node *p_head;
} Dlist;
Dlist *list = NULL;*/


