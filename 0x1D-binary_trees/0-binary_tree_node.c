#include "binary_trees.h"

/**
 * binary_tree_node - binary tree node
 * @parent: pointer
 * @value: input
 * Return: pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bintree = NULL;

	bintree = calloc(1, sizeof(binary_tree_t));
	if (!bintree)
		return (NULL);
	bintree->parent = parent;
	bintree->n = value;
	return (bintree);
}