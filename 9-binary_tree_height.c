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
		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return (l > r ? l : r);
	}
}
