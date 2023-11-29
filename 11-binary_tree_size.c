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
	size_t left_sub_tree_size, right_sub_tree_size;

	if (!tree)
		return (0);
	left_sub_tree_size = binary_tree_size(tree->left);
	right_sub_tree_size = binary_tree_size(tree->right);
	return (left_sub_tree_size + right_sub_tree_size + 1);
}
