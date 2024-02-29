#include "binary_trees.h"

/**
 * binary_tree_height - Get Height of the tree
 * @tree: Pointer to root
 *
 * Return: The size
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
	{
		return (0);
	}
	else
	{
		l = binary_tree_height(tree->left);
		r = binary_tree_height(tree->right);
		return (l > r ? l : r) + 1;
	}
}