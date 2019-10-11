#include "hash_tables.h"

/**
* key_index - emtry point
* @key: key .-.
* @size: size of the hash table
* Description:  the key
* Return: index of the val
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *)key) % size);
}
