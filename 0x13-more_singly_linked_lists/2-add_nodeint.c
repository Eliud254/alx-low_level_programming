#include "lists.h"


/**
 * add_nodeint_end -Add a new node at the end of a linked list.
 * @head: Pointer to a pointer to the first node in the list.
 * @n: Data to insert in the new node
 *
 * Return: Poiter to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *new, *last;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
}
else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}
return (new);
}
