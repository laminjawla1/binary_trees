#include "binary_trees.h"

/**
 * binary_tree_size - Finds the size of a binary tree
 *
 * @tree: The tree to be computed
 *
 * Return: The of a tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
