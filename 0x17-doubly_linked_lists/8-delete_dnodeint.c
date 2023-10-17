#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes a node at a given index
 * @head: A pointer to a pointer to the first element in the list
 * @index: The index of the node to delete
 * Return: 1 for Success or -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        temp = *head;
        *head = temp->next;
        free(temp);
        return (1);
    }

    current = *head;
    for (i = 0; current && i < index - 1; i++)
    {
        current = current->next;
        if (current == NULL)
            return (-1);
    }

    if (current && current->next)
    {
        temp = current->next;
        current->next = temp->next;
        free(temp);
        return (1);
    }

    return (-1);
}

