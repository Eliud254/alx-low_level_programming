#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - Top the new node at the end
 * @head:The pointer to head
 * @n:Int
 *
 * Return:function fails = NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *last;

new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}

last = *head;
while (last->next != NULL)
last = last->next;

last->next = new;
new->prev = last;

return (new);
}

