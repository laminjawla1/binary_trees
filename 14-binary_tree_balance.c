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
 * get_height - Finds the height of the binary tree.
 *
 * @root: The root of the tree
 *
 * Return: The height of a tree
 */
size_t get_height(const binary_tree_t *root)
{
	size_t left_height, right_height;

	if (!root)
		return (0);
	left_height = get_height(root->left);
	right_height = get_height(root->right);

	return (max(left_height, right_height) + 1);
}

/**
 * binary_tree_balance - Finds the balance factor of a tree
 *
 * @tree: The tree
 *
 * Return: The balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = get_height(tree->left);
	right_height =	get_height(tree->right);

	return (left_height - right_height);
}
