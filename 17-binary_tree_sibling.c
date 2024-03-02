#include "binary_trees.h"

/**
 * binary_tree_sibling - Find sibling node
 * @node: pointer to a node
 *
 * Return: pointer to the sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
	{
		return (NULL);
	}
	parent = node->parent;
	if (parent->left == node)
	{
		return (parent->right);
	}
	return (parent->left);
}
