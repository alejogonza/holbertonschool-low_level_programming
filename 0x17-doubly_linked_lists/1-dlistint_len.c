#include "lists.h"
/**
 * dlistint_len - entry point
 * Description: returns the number of elements in a linked dlistint_t list
 * @h: * head of list
 * Return: num of elem in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	num = 0;

	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}

	return (num);
}
