#include "lists.h"
/**
 * sum_dlistint - calculate the sum of all the data of a linked list.
 * @head:head of the list
 * Return:the sum of all the data (n) of a dlistint_t linked list.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *ptr;

	ptr = head;
	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
