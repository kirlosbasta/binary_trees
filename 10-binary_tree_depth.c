#include "binary_trees.h"

/**
 * binary_tree_depth - Find depth of a node
 * @tree: Node in a tree
 *
 * Return: The depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
	{
		return (0);
	}
	depth = tree->parent ? binary_tree_depth(tree->parent) + 1 : 0;
	return (depth);
}
