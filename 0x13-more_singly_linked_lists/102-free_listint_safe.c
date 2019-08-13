#include "lists.h"
/**
 * free_listint_safe - entry point
 * Descripition: function that frees a listint_t list.
 * @h: head of list
 * Return: none
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *act;
	size_t cter = 0;

	listint_t *hdone = NULL;
	listint_t *tse = NULL;

	tse = tse;
	hdone = hdone;

	if (h && *h)
	{

		act = *h;

		while (act != NULL)
		{
			tmp = act->next;

			act->next = NULL;

			free(act);

			act = tmp;

			cter++;
		}
	}

	*h = NULL;

	return (cter);
}
