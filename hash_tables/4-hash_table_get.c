#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht:is the hash table you want to look into.
 * @key:is the key you are looking for.
 * Return:the value associated with the element, or NULL(error).
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
