#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - The linked dlistint_t list.
 * @head:Dlistint_t list head
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
