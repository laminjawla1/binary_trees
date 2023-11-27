#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given
 * node is root
 *
 * @node: Arg to be computed
 *
 * Return: true or false
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (!node->parent);
}
