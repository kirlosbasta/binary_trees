#include "binary_trees.h"

/**
 * binary_tree_uncle - Find uncle node
 * @node: pointer to a node
 *
 * Return: pointer to the uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (!node || !node->parent || !node->parent->parent)
	{
		return (NULL);
	}
	grandparent = node->parent->parent;
	if (grandparent->left == node->parent)
	{
		return (grandparent->right);
	}
	return (grandparent->left);
}
