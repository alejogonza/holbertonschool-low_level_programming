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
	unsigned long ind;
	hash_node_t *trav;
	int count;

	if (ht  == NULL || key == NULL)
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);

	trav = ht->array[ind];

	if (trav == NULL)
		return (NULL);

	for (count = strcmp(key, trav->key); trav != NULL; )
	{
		if (count == 0)
			return (trav->value);
		trav = trav->next;
	}

	return (NULL);
}
