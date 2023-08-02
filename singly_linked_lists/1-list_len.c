#include "lists.h"
/**
 *list_len - prints the number of elements in a linked list
 *@h:pointer
 *Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	const list_t *current;
	int nb;

	current = h;
	nb = 0;

	while (current != NULL)
	{
		if (current->str != NULL || current->len > 0)
		{
			nb++;
		}
		current = current->next;
	}
	return (nb);
}

