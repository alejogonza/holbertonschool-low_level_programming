#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - entry point
 * @ht: hash table
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *actual = NULL;
	unsigned long int count = 0;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (count = 0; count < ht->size; count++)
	{
		if (ht->array[count])
		{
			actual = ht->array[count];
			while (actual)
			{
				if (flag)
				{
					printf(", ");
				}
				printf("'%s': '%s'", actual->key, actual->value);
				flag = 1;
				actual = actual->next;
			}
		}
	}
	printf("}\n");
}
