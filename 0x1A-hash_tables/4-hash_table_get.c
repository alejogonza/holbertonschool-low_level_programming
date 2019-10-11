#include "hash_tables.h"

/**
 * *hash_table_get - entry point
 * @ht: hash table
 * @key: the key
 * Description: return NULL if not found
 * Return: the val associated with the elem
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind = 0;
	hash_node_t *actual = NULL;

	if (!key || !strcmp(key, "") || (ht == NULL))
		return (NULL);

	if (ht->array == NULL)
		return (NULL);

	ind = hash_djb2((const unsigned char *)key) % ht->size;

	actual = ht->array[ind];
	while (actual)
	{
		if (!strcmp(actual->key, key))
			return (actual->value);
		actual = actual->next;
	}
	return (NULL);
}
