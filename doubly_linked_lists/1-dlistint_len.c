#include "lists.h"
/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list
 * @h:pointer
 * Return:the number of elements in a linked dlistint_t list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int nb;

	ptr = h;
	nb = 0;
	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		ptr = ptr->next;
		nb++;
	}
	return  (nb);
}
