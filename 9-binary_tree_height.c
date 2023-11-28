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
	return (a > b) ? a : b;
}
/**
 * binary_tree_height - Finds the height of a binary
 * tree
 *
 * @tree: The tree
 *
 * Return: Height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (max(left, right) + 1);
}
