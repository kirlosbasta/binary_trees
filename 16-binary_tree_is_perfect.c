#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a tree is perfect binary tree or not
 * @tree: Root
 *
 * Return: 1 if perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int full, balanced;

	if (!tree)
	{
		return (0);
	}
	full = binary_tree_is_full(tree);
	balanced = binary_tree_balance(tree);
	if (full == 1 && balanced == 0)
	{
		return (1);
	}
	return (0);
}

/**
 * binary_tree_is_full - Check if a tree is full binary tree or not
 * @tree: Root
 *
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}

/**
 * binary_tree_balance - Find balance factor tree
 * @tree: Node in a tree
 *
 * Return: The Balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
	{
		return (0);
	}
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
