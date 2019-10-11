#include "hash_tables.h"

/**
* hash_table_create - entry point
* *@size: size of arr
* Description: if fails return null
* Return: * to the hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table_h;
	unsigned long int count;

	if (size == 0)
		return (NULL);

	new_table_h = malloc(sizeof(hash_table_t));

	if (new_table_h == NULL)
		return (NULL);

	new_table_h->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table_h->array == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
	{
		new_table_h->array[count] = NULL;
	}

	new_table_h->size = size;

	return (new_table_h);
}
