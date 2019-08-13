#include "lists.h"

/**
 * print_listint_safe - entry point
 * Descriptiton: function that prints a listint_t linked list.
 * @head: head list
 * Return: num nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t sz = 0;
	size_t a = 0;

	void *p[200];

	if (head == NULL)
		return (0);

	for (sz = 0; head != NULL; sz++)
	{
		for (a = 0; a < sz; a++)
		{
			if (p[a] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (sz);
			}
		}

		p[a] = (void *)head;

		printf("[%p] %d\n", (void *)head, head->n);

		head = head->next;
	}
	return (sz);
}
