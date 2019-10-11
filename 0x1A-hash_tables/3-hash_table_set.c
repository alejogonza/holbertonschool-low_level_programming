#include "hash_tables.h"

/**
 * hash_table_set - entry point
 * @ht: the hash table
 * @key: the key
 * @value: the val associated with the key
 * Description: function that adds an element to the hash table
 * Return: 1 if it success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index_th;
	unsigned long size_th;
	hash_node_t *new = NULL;

	if (ht  == NULL || key == NULL || value == NULL)
		return (0);
	size_th = ht->size_th;
	index_th = keyin((const unsigned char *)key, size_th);

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
