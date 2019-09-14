#include "lists.h"

/**
 * print_dlistint - entry point
 * Description: unction that prints all the elements of a dlistint_t list.
 * @h: dlistint_t
 * Return: list nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t aone;
	aone = 0;

	while (h != NULL)
	{
		aone++;
		printf("%d\n", (*h).n);
		h = (*h).next;
	}
	return (aone);
}
