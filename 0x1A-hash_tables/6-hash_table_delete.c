#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - entry point
 * @ht: hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *actual = NULL, *p = NULL;
	unsigned long int count = 0;

	if (!ht)
		return;
	if (ht->array)
	{
		for (count = 0; count < ht->size; count++)
		{
			if (ht->array[count])
			{
				actual = ht->array[count];
				while (actual)
				{
					p = actual;
					free(p->key);
					free(p->value);
					free(p);
					actual = actual->next;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
