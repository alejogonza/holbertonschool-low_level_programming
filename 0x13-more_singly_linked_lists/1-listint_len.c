#include "lists.h"
/**
 * listint_len - entry point
 * Description: returns the number of elements in a linked.
 * @h: head to list
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *plist;

	size_t numnode = 0;

	plist = h;

	while (plist != NULL)
	{

		numnode++;
		plist = plist->next;

	}

	return (numnode);

}
