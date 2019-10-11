#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * myStrdup - entry point
 * @node: node that hold the val
 * @myKey: string duplicate
 * Return: * to string
 */
char *myStrdup(hash_node_t **node, char *myKey)
{
	char *stri = NULL;

	stri = strdup(myKey);
	if (stri == NULL)
	{
		if ((*node)->key)
			free((*node)->key);
		if ((*node)->value)
			free((*node)->value);
		free(*node);
		return (NULL);
	}
	return (stri);
}

/**
 * hash_table_set - entry point
 * @ht: h_table to use
 * @key: h_table key
 * @value: val associated with the key
 * Return: 1 if good
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n = NULL, *act = NULL;
	char *tmp = NULL;
	unsigned long int ind = 0;

	if (!ht || !strcmp(key, "") || !key || !value)
		return (0);
	ind = hash_djb2((const unsigned char *)key) % ht->size;
	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
		return (0);
	n->key = myStrdup(&n, (char *)key);
	n->value = myStrdup(&n, (char *)value);
	n->next = NULL;
	if (ht->array[ind] == NULL)
		ht->array[ind] = n;
	else
	{
		act = ht->array[ind];
		while (act)
		{
			if (!strcmp(act->key, key))
			{
				tmp = act->value;
				act->value = myStrdup(&n, (char *)value);
				free(tmp);
				free(n->key);
				free(n->value);
				free(n);
				return (1);
			}
			act = act->next;
		}
		n->next = ht->array[ind];
		ht->array[ind] = n;
	}
	return (1);
}
