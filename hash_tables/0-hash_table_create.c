#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size:the size of the array.
 * Return:a pointer to the newly created hash table or NULL in case of error
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *newptr;

	if (size == 0)
	{
		return (NULL);
	}
	newptr = malloc(sizeof(hash_table_t));
	if (newptr == NULL)
	{
		free(newptr);
		return (NULL);
	}
	newptr->size = size;
	newptr->array = malloc(sizeof(hash_node_t *) * size);
	if (newptr->array == NULL)
	{
		free(newptr);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		newptr->array[i] = NULL;
	}
	return (newptr);
}
