#include "lists.h"

/**
 * sum_listint - Calculates the sum of all
 * the data in a linked list of type listint_t.
 *@head: Pointer to the first node in the linked list.
 *
 * Return: The resulting sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

