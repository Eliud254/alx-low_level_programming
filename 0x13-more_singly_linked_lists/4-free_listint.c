#include "lists.h"

/**
 * free_listint - Frees a linked list of type listint_t.
 * @head: Pointer to the first element in the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

