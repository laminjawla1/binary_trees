#include "binary_trees.h"

/**
 * max - Returns the maximum value
 *
 * @a: First param
 * @b: Second param
 *
 * Return: Max
 */
size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}
/**
 * find_binary_tree_height - Finds the height of the binary tree.
 *
 * @root: The root of the tree
 *
 * Return: The height of a tree
 */
size_t find_binary_tree_height(const binary_tree_t *root)
{
	size_t left_height, right_height;

	if (!root)
		return (0);
	left_height = find_binary_tree_height(root->left);
	right_height = find_binary_tree_height(root->right);

	return (max(left_height, right_height) + 1);
}
/**
 * binary_tree_height - Calls a helper function
 * the height of a binary tree.
 *
 * @tree: The tree
 *
 * Return: Height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (find_binary_tree_height(tree) - 1);
}
