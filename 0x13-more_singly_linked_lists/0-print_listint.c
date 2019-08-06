#include "lists.h"
/**
 * print_listint - entry point
 * Description: prints all the elements of a listint_t list
 * @h: print list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numnode;

	const listint_t *plist;

	numnode = 0;

	plist = h;

	while (plist != NULL)
	{
		printf("%d\n", plist->n);

		plist = plist->next;

		numnode++;

	}

	return (numnode);
}
