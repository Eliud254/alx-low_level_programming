#include "lists.h"
#include <stdio.h>
/**
 * print_listint -print all the elements of a listtint_t list
 * @h: pointer to the head of the list
 *
 * Return: The number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{

	size_t num_nodes = 0;

	while (h)

	{
		printf("%d\n" , h->n);
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
