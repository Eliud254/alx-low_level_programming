#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Deletes a node at a
 * specific index in a doubly linked list.
 * @head: A pointer to the first node of the
 * doubly linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if deletion is successful, -1 if
 * it fails (e.g., index is out of range).
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp, *temp_addr;
unsigned int count;

temp = *head;
count = 0;

while (temp)
{
if (count == (index - 1))
{
temp_addr = (temp->next)->next;
free(temp->next);
temp->next = temp_addr;
return (1);
}
else if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

count++;
temp = temp->next;
}

return (-1);
}

