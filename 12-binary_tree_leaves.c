#include "binary_trees.h"

/**
 * binary_tree_leaves - Finds the number of leave
 * nodes in a tree
 *
 * @tree: The tree
 *
 * Return: Number of leave nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
