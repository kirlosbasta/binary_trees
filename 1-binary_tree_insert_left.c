#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as left child of the parent
 * @parent: Parent node
 * @value: Data
 *
 * Return: pointer to the new node or NULL in failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left)
	{
		tmp = parent->left;
		tmp->parent = node;
	}
	node->parent = parent;
	node->n = value;
	node->left = tmp;
	node->right = NULL;
	parent->left = node;
	return (node);
}
