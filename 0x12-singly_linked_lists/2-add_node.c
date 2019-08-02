#include "lists.h"

/**
 * add_node - add node in the beginning
 * @head: linked list in the beginning.
 * @str: Data
 * Return: success adress of head fail null
 */

list_t *add_node(list_t **head, const char *str)
{

	size_t newch;

	char *struc = strdup(str);

	list_t *nnode = (list_t *)malloc(sizeof(list_t));

	if (nnode == NULL)
		return (NULL);

	for (newch = 0; str[newch]; newch++)
		;

	nnode->str = struc;

	nnode->len = newch;

	nnode->next = *head;

	*head = nnode;

	return (*head);
}
