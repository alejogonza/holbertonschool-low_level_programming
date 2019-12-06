#include "binary_trees.h"

/**
 * binary_tree_node - binary tree node
 * @parent: pointer
 * @value: input
 * Return: pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newtree;

	newtree = malloc(sizeof(binary_tree_t));
	if (!newtree)
		return (NULL);
	newtree->n = value;
	newtree->parent = parent;
	newtree->left = NULL;
	newtree->right = NULL;
	return (newtree);
}