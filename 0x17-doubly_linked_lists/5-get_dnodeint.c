#include "lists.h"

/**
 * get_dnodeint_at_index -Identify the node to a dlistint_t list.
 * @head:Dlistint_t list header
 * @index: Node to locate.
 *
 * Return: The node does not exist - NULL
 * *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

for (; index != 0; index--)
{
if (head == NULL)
return (NULL);
head = head->next;
}

return (head);
}
