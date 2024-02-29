#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse the tree
 * @tree: Root
 * @func: Funtion pointer that return Nothing and take one argument
 *
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
