#include "lists.h"

/**
 * add_node_end - add node in the end
 * @head: linked list in the beginning.
 * @str: Data
 * Return: success adress of head fail null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode, *tmp;
	size_t newch;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);

	nnode->str = strdup(str);

	for (newch = 0; str[newch]; newch++)
		;

	nnode->len = newch;
	nnode->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = nnode;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = nnode;
	}

	return (*head);
}
