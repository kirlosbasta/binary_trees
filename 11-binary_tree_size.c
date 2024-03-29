#include "binary_trees.h"

/**
 * binary_tree_size - Find size of a node
 * @tree: Node in a tree
 *
 * Return: The depth
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
	{
		return (0);
	}
	size = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);
	return (size);
}
