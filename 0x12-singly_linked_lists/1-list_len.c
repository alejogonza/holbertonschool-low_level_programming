#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - entry point
 * descripiton: print one single list
 * @h: pointer to list.
 * Return: elements in the list
 */

size_t list_len(const list_t *h)
{

	int lcount = 0;

	while (h != NULL)
	{
		h = h->next;
		lcount++;
	}
	return (lcount);
}
