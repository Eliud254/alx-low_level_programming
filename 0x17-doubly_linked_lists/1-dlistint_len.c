#include "lists.h"

/**
 * dlistint_len - All the number of the  elements
 * in a linked dlistint_t list.
 * @h: Head of dlistint_t list.
 *
 * Return: Numnber of elements in dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}

return (nodes);
}
