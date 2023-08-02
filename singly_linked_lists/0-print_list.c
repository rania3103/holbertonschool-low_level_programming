#include "lists.h"
/**
 *print_list - prints all the elements of a list
 *@h:pointer
 *Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *current;
	int nb;

	current = h;
	nb = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
		nb++;
	}
	return (nb);
}

