#include "lists.h"

/**
 * print_list - entry ponit
 * descripiton: print one single list
 * @h: pointer to list.
 * Return: elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t lcount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		lcount++;
	}
	return (lcount);
}
