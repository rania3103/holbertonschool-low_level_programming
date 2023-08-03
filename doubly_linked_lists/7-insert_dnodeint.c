#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h:head of the file
 * @idx:index where the node should be added
 * @n:data
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr;
	dlistint_t *new;
	unsigned int i;

	ptr = *h;
	i = 0;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	while (ptr != NULL && i < idx)
	{
		ptr = ptr->next;
		i--;
	}
	new->prev = ptr;
	new->n = n;
	ptr = ptr->next;
	new->next = ptr;
	return (new);
}
