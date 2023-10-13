#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint -Top the  new node at the beginning of a dlistint_t list.
 * @head: The pointer to  head of  dlistint_t list.
 * @n: integer
 * *
 * Return: If the function fails - NULL.
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = *head;

if (*head != NULL)
(*head)->prev = new;

*head = new;

return (new);
}
