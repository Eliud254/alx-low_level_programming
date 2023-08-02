#include "lists.h"

/**
 * reverse_listint - Reverses a linked list of type listint_t.
 * @head: Pointer to a pointer to the first node in the list.
 *
 * Return: Pointer to the first node in the new reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

