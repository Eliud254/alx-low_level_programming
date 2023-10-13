#include "lists.h"

/**
 * sum_dlistint -Total Sums of the data of all dlistint_t list.
 * @head:Dlistint_t list.
 *
 * Return:Total sum of the data.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
