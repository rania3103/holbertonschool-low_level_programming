#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table.
 * @ht:is the hash table you want to add or update the key/value to
 * @key:is the key and can not be an empty string.
 * @value:value associated with the key.
 * Return:1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			tmp->value = strdup(value);
			if (tmp->value == NULL)
			{
				return (0);
			}
		return (1);
		}
		tmp = tmp->next;
	}
	return (1);
}
