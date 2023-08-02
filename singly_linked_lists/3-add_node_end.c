#include "lists.h"
#include <string.h>
/**
 *add_node_end - adds a new node at the end of a list
 *@head:head of the list
 *@str:string
 *Return:  the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr;

	new = malloc(sizeof(list_t));
	ptr = *head;
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	new->len = strlen(new->str);
	return (new);
}

