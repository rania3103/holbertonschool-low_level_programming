#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht:is the hash table you want to add or update the key/value to
 * @key:is the key and can not be an empty string.
 * @value:value associated with the key.
 * Return:1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *tmp;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	i = key_index(key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (tmp->key == key)
		{
			tmp->value = stdup(value);
			if (tmp->value == NULL)
			{
				return (NULL);
			}
		}
		tmp = tmp->next;
	}

	return (1);
}
