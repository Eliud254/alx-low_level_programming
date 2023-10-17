#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Inserts a new node at a
 * specific index in a doubly linked list.
 * @h: A pointer to the first node of the doubly linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The integer value to be stored in the new node.
 *
 * Return: If the function succeeds, the address
 * of the new node; otherwise, NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int count;
dlistint_t *new_node, *temp;

if (h == NULL)
return (NULL);
if (idx == 0)
{
new_node = add_dnodeint(h, n);
return (new_node);
}

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
temp = *h;
count = 0;

while (count < (idx - 1))
{
count++;
temp = temp->next;
if (temp == NULL)
return (NULL);
}

new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}

