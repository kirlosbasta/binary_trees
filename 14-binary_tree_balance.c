#include "binary_trees.h"

/**
 * binary_tree_balance - Find balance factor tree
 * @tree: Node in a tree
 *
 * Return: The Balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;
	l = tree->left ? (int)binary_tree_height(tree->left) : -1;
	r = tree->right ? (int)binary_tree_height(tree->right) : -1;
	return (l - r);
}

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
