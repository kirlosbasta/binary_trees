#include "binary_trees.h"

/**
 * binary_tree_node - create new node for binary tree
 * @parent: parent of the new node
 * @value: The data
 *
 * Return: pointer to the new node or null in failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
