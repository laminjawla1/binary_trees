#include "binary_trees.h"

/**
 * get_depth - Gets the depth of a node
 *
 * @root: The root
 *
 * Return: Depth
 */
int get_depth(binary_tree_t *root)
{
	if (!root)
		return (0);
	return (get_depth(root->left) + get_depth(root->right) + 1);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: The tree
 *
 * Return: True or false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left_height = get_depth(tree->left);
	right_height = get_depth(tree->right);

	return (left_height - right_height == 0);
}
