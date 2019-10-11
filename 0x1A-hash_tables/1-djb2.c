#include "hash_tables.h"

/**
* hash_djb2 - entry point
* @str: str to hash
* Description: if fail return null
* Return: * to create hash table
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_table;
	int count;

	hash_table = 5381;
	while ((count = *str++))
	{
		hash_table = ((hash_table << 5) + hash_table) + count;
	}
	return (hash_table);
}
