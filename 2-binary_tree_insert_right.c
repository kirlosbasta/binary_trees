#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as right child of the parent
 * @parent: Parent node
 * @value: Data
 *
 * Return: pointer to the new node or NULL in failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *tmp;

	if (!parent)
	{
		return (NULL);
	}
	node = malloc(sizeof(binary_tree_t));
	if (!node)
	{
		return (NULL);
	}
	tmp = NULL;
	if (parent->right)
	{
		tmp = parent->right;
		tmp->parent = node;
	}
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = tmp;
	parent->right = node;
	return (node);
}
