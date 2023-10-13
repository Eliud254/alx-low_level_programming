#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint -The prints elements of dlistint_t list.
 * @h: Head of the dlistint_t list.
 *
 * Return:The number of nodes for the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}

return (nodes);
}
