#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf node
 *
 * @node: The node to be checked
 *
 * Return: true or false
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (!node->left && !node->right);
}
